/*
 *  linux/fs/tfs/bitmap.c
 *
 * Copyright (C) 1992, 1993, 1994, 1995
 * Remy Card (card@masi.ibp.fr)
 * Laboratoire MASI - Institut Blaise Pascal
 * Universite Pierre et Marie Curie (Paris VI)
 */

#include <linux/buffer_head.h>
#include "tfs.h"

static int nibblemap[] = {4, 3, 3, 2, 3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 1, 0};

unsigned long tfs_count_free (struct buffer_head * map, unsigned int numchars)
{
	unsigned int i;
	unsigned long sum = 0;
	
	if (!map) 
		return (0);
	for (i = 0; i < numchars; i++)
		sum += nibblemap[map->b_data[i] & 0xf] +
			nibblemap[(map->b_data[i] >> 4) & 0xf];
	return (sum);
}






/* JC */


//this is passed a len, and an array of pointers to (char *)
//as well as a starting offset and ending offset
//it returns the first byte which is zero in all of the given bitmaps
inline int tfs_find_zero_byte(int count, char ** bitmaps, int start, int end){
	int i,j;
	char *c;
	int notdone=1;
	
	j=start;
	do{
		for(i=0;i<count;i++){
			if(j>=end){ break; }
			if( ((char *)bitmaps[i])[j]!=0){
				c=memscan(bitmaps[i]+j,0, end-j);
				j=c - bitmaps[i];
				break;
			}
		}
		if(i>=count || j>=end){ break; }
	}while(notdone);
	return j;
}
		
//This finds the first byte which is writeable for the given priority
inline int tfs_p_find_first_zero_byte(char *highp, char *lowp, char *dirty, char *blocklock,
		char * allocationHints, int start, int length, int priority, int blocksPerAllocHint){
//the allocation hint bitmap does not have a bit for every block
//the number of blocks per bit is defined by (blocksPerAllocHint)
	int end = start+length;
	int r;
	while(start < end){
		char *lpbitmaps[4]={highp,lowp,dirty,blocklock};
		char *hpbitmaps[2]={highp,blocklock};
		if(priority==TFS_TRANSPARENT){
			start= tfs_find_zero_byte(4,lpbitmaps,start, end-start);
			if(tfs_test_bit(start/blocksPerAllocHint, allocationHints)){
				start++;
				printk("Hit marked block in alloc hints: %i\n",start);
				continue;
			}else{
				break;
			}
		}else if(priority==TFS_OPAQUE){
			start= tfs_find_zero_byte(2,hpbitmaps,start,end-start);
			break;
		}else if(priority==TFS_OPAQUE_NO_OVERWRITE){
			start = tfs_find_zero_byte(4,lpbitmaps,start, end-start);
			break;
		}else{
			printk("TFS: SEARCHING BITMAP WITH UNDEFINED PRIORITY, USING LP\n");
			start = tfs_find_zero_byte(4,lpbitmaps,start, end-start);
			if(tfs_test_bit(start/blocksPerAllocHint, allocationHints)){
				start++;
				printk("Hit marked block in alloc hints: %i\n",start);
				continue;
			}else{
				break;
			}
		}

	}

	return start;
}

//set the bits in the bitmaps according to the priority
inline int tfs_p_set_bit(int j, char *highp, char *lowp, char *dirty, char *blocklock,
		char *allocationPredictor, int priority, int blocksPerAllocHint){
	if(priority==TFS_TRANSPARENT){

		if(tfs_set_bit(j,blocklock)){
			return 1;
		}
		if(tfs_set_bit(j,lowp)){
			tfs_clear_bit(j,blocklock);
			return 1;
		}
		return 0;
	}else if(priority==TFS_OPAQUE||priority==TFS_OPAQUE_NO_OVERWRITE){
		if(tfs_test_bit(j,blocklock)){ return 1; }
		if(tfs_test_bit(j,lowp)){
			if(priority==TFS_OPAQUE_NO_OVERWRITE){ printk("low priority metadata overwriting lp block\n"); }
			tfs_set_bit(j,dirty);
		}else{
			if(tfs_test_bit(j,dirty)){
				BUG();
			}
		}
		return tfs_set_bit(j,highp);
	}else{
		printk("TFS: MARKING BLOCK WITH UNDEFINED PRIORITY, USING HP\n");
		if(tfs_test_bit(j,blocklock)){ return 1; }
		if(tfs_test_bit(j,lowp)){
			tfs_set_bit(j,dirty);
		}
		return tfs_set_bit(j,highp);
	}
}

int tfs_p_set_bit_atomic(spinlock_t *lock, int j, char *highp, char *lowp, char *dirty, char *blocklock, 
		char *allocationPredictor, int priority, int blocksPerAllocHint){
	int r;
	spin_lock(lock);
	r=  tfs_p_set_bit(j, highp, lowp, dirty, blocklock,allocationPredictor, priority, blocksPerAllocHint);
	spin_unlock(lock);
	return r;
}




//test a bit according to priority
inline int tfs_p_test_bit(int j, char *highp, char *lowp, char *dirty, char *blocklock, 
		char * allocationPredictor, int priority, int blocksPerAllocHint){
	if(priority==TFS_TRANSPARENT){
		if(tfs_test_bit(j/blocksPerAllocHint, allocationPredictor)){
			printk("hit marked block in allocation predictor\n");
		}
		return tfs_test_bit(j/blocksPerAllocHint, allocationPredictor)|| tfs_test_bit(j, highp) || tfs_test_bit(j,lowp)
			|| tfs_test_bit(j, dirty)|| tfs_test_bit(j,blocklock) ;
	}else if(priority==TFS_OPAQUE){
		return tfs_test_bit(j, highp) || tfs_test_bit(j,blocklock);
	}else if(priority==TFS_OPAQUE_NO_OVERWRITE){
		return tfs_test_bit(j, highp) || tfs_test_bit(j,lowp)
			|| tfs_test_bit(j, dirty)|| tfs_test_bit(j,blocklock);
	}else{
		printk("TFS: TESTING BLOCK WITH UNDEFINED PRIORITY, USING LP\n");
//		printk("	hp %i lp %i dirty %i\n",lpfs_test_bit(j, highp),
//			lpfs_test_bit(j,lowp),lpfs_test_bit(j, dirty));
		if(tfs_test_bit(j/blocksPerAllocHint, allocationPredictor)){
			printk("hit marked block in allocation predictor\n");
		}
		return tfs_test_bit(j, highp) || tfs_test_bit(j,lowp) 
			|| tfs_test_bit(j, dirty)||tfs_test_bit(j,blocklock)|| 
			tfs_test_bit(j/blocksPerAllocHint, allocationPredictor);
	}
}

//find next zero bit in an array of bitmaps
//FIXME possible memory problem
//are we sure that this works
//can, and should, be tested in user space
inline int tfs_p_find_next_zero_bith(int count, char **bitmaps, int start, int end){
	int i,j;
	int notdone=1;
	
	j=start;
	do{
		for(i=0;i<count;i++){
			if(j>=end){ break; }
			if(tfs_test_bit(j,bitmaps[i])){
				j=tfs_find_next_zero_bit(bitmaps[i],end, j);
				break;
			}
		}
		if(i>=count || j>=end){ break; }
	}while(notdone);
	return j;
}

inline int tfs_p_find_next_zero_bit(char *highp, char *lowp, char *dirty, char *blocklock, char * allocHints,
				int end, int start, int priority, int blocksPerAllocHint){
	char *lpbitmaps[4]={highp,lowp,dirty,blocklock};
	char *hpbitmaps[2]={highp,blocklock};
	while(start <=end){
		if(priority==TFS_TRANSPARENT){
			start =  tfs_p_find_next_zero_bith(4,lpbitmaps,start, end);
			if( tfs_test_bit(start/blocksPerAllocHint, allocHints)){
				start++;
				printk("Hit marked block in alloc hints: %i\n",start);
				continue;
			}else{
				break;
			}
		}else if(priority==TFS_OPAQUE){
			start = tfs_p_find_next_zero_bith(2,hpbitmaps,start,end);
			break;
		}else if(priority==TFS_OPAQUE_NO_OVERWRITE){
			start = tfs_p_find_next_zero_bith(4,lpbitmaps,start,end);
			break;
		}else{
			printk("TFS: SEARCHING BITMAP WITH UNDEFINED PRIORITY %i, USING LP\n",priority);
			start = tfs_p_find_next_zero_bith(4,lpbitmaps,start, end);
			if( tfs_test_bit(start/blocksPerAllocHint, allocHints)){
				start++;
				printk("Hit marked block in alloc hints: %i\n",start);
				continue;
			}else{
				break;
			}
		}

	}
	return start;
}


/* /JC */
