#
# Standard e2fsprogs prologue....
#

srcdir = .
top_srcdir = ..

top_builddir = ..
my_dir = misc
INSTALL = /usr/bin/install -c


# Beginning of file MCONFIG

all::

check::

SHELL = /bin/sh

COMPRESS_EXT = gz bz2 bz Z

prefix = /usr
root_prefix = 
exec_prefix = ${prefix}
root_bindir = ${root_prefix}/bin
root_sbindir = ${root_prefix}/sbin
root_libdir = ${root_prefix}/lib
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libdir = ${exec_prefix}/lib
datadir= ${prefix}/share
localedir = $(datadir)/locale
root_sysconfdir= ${root_prefix}/etc
includedir = ${prefix}/include
mandir = /usr/share/man
man1dir = $(mandir)/man1
man3dir = $(mandir)/man3
man8dir = $(mandir)/man8
infodir = ${prefix}/info
datadir = ${prefix}/share



INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
CC = cc
BUILD_CC = cc
DEFS = -DLOCALEDIR=\"$(localedir)\" -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DENABLE_HTREE=1 -DENABLE_SWAPFS=1 -DPACKAGE=\"e2fsprogs\" -DVERSION=\"1.34\" -DHAVE_ALLOCA_H=1 -DHAVE_ALLOCA=1 -DHAVE_STDLIB_H=1 -DHAVE_UNISTD_H=1 -DHAVE_GETPAGESIZE=1 -DHAVE_MMAP=1 -DINTDIV0_RAISES_SIGFPE=1 -DHAVE_INTTYPES_H_WITH_UINTMAX=1 -DHAVE_STDINT_H_WITH_UINTMAX=1 -DHAVE_UNSIGNED_LONG_LONG=1 -DHAVE_INTTYPES_H=1 -DHAVE_ARGZ_H=1 -DHAVE_LIMITS_H=1 -DHAVE_LOCALE_H=1 -DHAVE_NL_TYPES_H=1 -DHAVE_MALLOC_H=1 -DHAVE_STDDEF_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_UNISTD_H=1 -DHAVE_SYS_PARAM_H=1 -DHAVE_FEOF_UNLOCKED=1 -DHAVE_FGETS_UNLOCKED=1 -DHAVE_GETC_UNLOCKED=1 -DHAVE_GETCWD=1 -DHAVE_GETEGID=1 -DHAVE_GETEUID=1 -DHAVE_GETGID=1 -DHAVE_GETUID=1 -DHAVE_MEMPCPY=1 -DHAVE_MUNMAP=1 -DHAVE_PUTENV=1 -DHAVE_SETENV=1 -DHAVE_SETLOCALE=1 -DHAVE_STPCPY=1 -DHAVE_STRCASECMP=1 -DHAVE_STRDUP=1 -DHAVE_STRTOUL=1 -DHAVE_TSEARCH=1 -DHAVE___ARGZ_COUNT=1 -DHAVE___ARGZ_STRINGIFY=1 -DHAVE___ARGZ_NEXT=1 -DHAVE_ICONV=1 -DICONV_CONST= -DHAVE_LANGINFO_CODESET=1 -DHAVE_LC_MESSAGES=1 -DENABLE_NLS=1 -DHAVE_GETTEXT=1 -DHAVE_DCGETTEXT=1 -DHAVE_STDLIB_H=1 -DHAVE_UNISTD_H=1 -DHAVE_STDARG_H=1 -DHAVE_ERRNO_H=1 -DHAVE_MALLOC_H=1 -DHAVE_MNTENT_H=1 -DHAVE_PATHS_H=1 -DHAVE_DIRENT_H=1 -DHAVE_GETOPT_H=1 -DHAVE_SETJMP_H=1 -DHAVE_SIGNAL_H=1 -DHAVE_TERMIOS_H=1 -DHAVE_LINUX_FD_H=1 -DHAVE_LINUX_MAJOR_H=1 -DHAVE_SYS_IOCTL_H=1 -DHAVE_SYS_MOUNT_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_SYS_SYSMACROS_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_WAIT_H=1 -DHAVE_SYS_RESOURCE_H=1 -DHAVE_NET_IF_H=1 -DHAVE_NETINET_IN_H=1 -DHAVE_VPRINTF=1 -DHAVE_RECLEN_DIRENT=1 -DHAVE_TYPE_SSIZE_T=1 -DHAVE_LSEEK64_PROTOTYPE=1 -DSIZEOF_SHORT=2 -DSIZEOF_INT=4 -DSIZEOF_LONG=4 -DSIZEOF_LONG_LONG=8 -DHAVE_GETRUSAGE=1 -DHAVE_LLSEEK=1 -DHAVE_LSEEK64=1 -DHAVE_OPEN64=1 -DHAVE_STRTOULL=1 -DHAVE_STRCASECMP=1 -DHAVE_SRANDOM=1 -DHAVE_FCHOWN=1 -DHAVE_MALLINFO=1 -DHAVE_FDATASYNC=1 -DHAVE_STRNLEN=1 -DHAVE_STRPTIME=1 -DHAVE_SYSCONF=1 -DHAVE_PATHCONF=1 -DHAVE_POSIX_MEMALIGN=1 -DHAVE_MEMALIGN=1 -DHAVE_VALLOC=1 -DHAVE_DLOPEN=1 -DHAVE_EXT2_IOCTLS=1 
CFLAGS = -g -O2
CPPFLAGS = 
INTL_FLAGS = 
ALL_CFLAGS = $(CPPFLAGS) $(DEFS) $(USE_WFLAGS) $(CFLAGS) $(XTRA_CFLAGS) \
	$(INTL_FLAGS) -I$(top_builddir)/lib -I$(top_srcdir)/lib \
	$(LINUX_INCLUDE) 
LDFLAGS = 
ALL_LDFLAGS = $(LDFLAGS)
RM = /bin/rm
LN = /bin/ln
LN_S = ln -s
MV = /bin/mv
CP = /bin/cp
CHMOD = /bin/chmod
AR = ar
AWK = /bin/awk
SED = /bin/sed
PERL = /usr/bin/perl
RANLIB = ranlib
STRIP = strip
LD = $(PURE) cc
ARUPD = $(AR) r
LDCONFIG = /sbin/ldconfig

#
# Library definitions
#
LIB = $(top_builddir)/lib
LIBSS = $(LIB)/libss.a
LIBCOM_ERR = $(LIB)/libcom_err.a
LIBE2P = $(LIB)/libe2p.a
LIBEXT2FS = $(LIB)/libext2fs.a
LIBUUID = $(LIB)/libuuid.a  
LIBBLKID = $(LIB)/libblkid.a
LIBINTL = 
DEPLIBUUID = $(LIB)/libuuid.a

STATIC_LIBSS = $(LIB)/libss.a
STATIC_LIBCOM_ERR = $(LIB)/libcom_err.a
STATIC_LIBE2P = $(LIB)/libe2p.a
STATIC_LIBEXT2FS = $(LIB)/libext2fs.a
STATIC_LIBUUID = $(LIB)/libuuid.a  
STATIC_LIBBLKID = $(LIB)/libblkid.a
DEPSTATIC_LIBUUID = $(LIB)/libuuid.a

PROFILED_LIBSS = $(LIB)/libss
PROFILED_LIBCOM_ERR = $(LIB)/libcom_err
PROFILED_LIBE2P = $(LIB)/libe2p
PROFILED_LIBEXT2FS = $(LIB)/libext2fs
PROFILED_LIBUUID = $(LIB)/libuuid  
PROFILED_LIBBLKID = $(LIB)/libblkid
DEPPROFILED_LIBUUID = $(LIB)/libuuid

#
# Use these definitions is you use tools 2.x, x < 16
#
#DLL_BIN=/usr/dll/bin
#JUMP_PREFIX=/usr/dll/jump/

#
# Use these definitions if you use tools 2.16 or above
#
DLL_BIN=/usr/bin
JUMP_PREFIX=/usr/bin/jump

# An include directive pointing to a directory holding enough linux-like
# include files to satisfy some programs here
LINUX_INCLUDE=

#
# A fast substitution command for fixing up man pages, shell scripts, etc.
#
SUBST_CONF=$(top_builddir)/util/subst.conf
SUBSTITUTE= $(top_builddir)/util/subst -f $(SUBST_CONF)
DEP_SUBSTITUTE= $(top_builddir)/util/subst $(SUBST_CONF)

$(top_builddir)/util/subst:
	cd $(top_builddir)/util ; $(MAKE) subst

#
# Warning flags
#
# Run make gcc-wall to do a build with warning messages.
#
#
WFLAGS=		-ansi -D_POSIX_SOURCE -pedantic $(WFLAGS_EXTRA) \
			-Wall -Wwrite-strings -Wpointer-arith \
			-Wcast-qual -Wcast-align  \
			-Wstrict-prototypes -Wmissing-prototypes \
			-Wformat-security  -Wformat-nonliteral \
			-Wmissing-format-attribute \
			-Wnested-externs -Winline -DNO_INLINE_FUNCS -Wshadow 

gcc-wall-new:
	(make USE_WFLAGS="$(WFLAGS)" > /dev/null) 2>&1 | sed -f $(top_srcdir)/util/gcc-wall-cleanup 

gcc-wall:
	make clean > /dev/null
	make gcc-wall-new

#
# Installation user and groups
#
BINGRP=		bin
BINOWN=		bin
BINMODE=	555
INCGRP=		bin
INCOWN=		bin
INCMODE=	444
LIBOWN=		bin
LIBGRP=		bin
LIBMODE=	444
MANGRP=		bin
MANOWN=		bin
MANMODE=	444

#
# Autoconf magic...
#

DEP_LIB_MAKEFILES = $(top_srcdir)/lib/Makefile.elf-lib  \
	$(top_srcdir)/lib/Makefile.dll-lib $(top_srcdir)/lib/Makefile.bsd-lib \
	$(top_srcdir)/lib/Makefile.checker $(top_srcdir)/lib/Makefile.profile

$(top_builddir)/config.status: $(top_srcdir)/configure
	cd $(top_builddir); ./config.status --recheck

$(top_builddir)/MCONFIG: $(top_srcdir)/MCONFIG.in $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=MCONFIG ./config.status

$(top_builddir)/lib/substitute_sh: $(top_srcdir)/lib/substitute_sh.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=lib/substitute_sh ./config.status

$(top_builddir)/util/subst.conf: $(top_srcdir)/util/subst.conf.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=util/subst.conf ./config.status

Makefile: $(srcdir)/Makefile.in $(top_builddir)/MCONFIG \
		$(DEP_MAKEFILE) $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=$(my_dir)/Makefile ./config.status

$(top_srcdir)/configure: $(top_srcdir)/configure.in
	cd $(top_srcdir) && autoconf

#
# Make depend magic...
#

.depend: Makefile $(SRCS) $(top_srcdir)/depfix.sed $(top_srcdir)/wordwrap.pl
	if test -n "$(SRCS)" ; then \
		$(CC) -M $(ALL_CFLAGS) $(SRCS) | \
			$(SED) -f $(top_srcdir)/depfix.sed \
			    -e 's; $(srcdir)/; $$(srcdir)/;g' \
			    -e 's; $(top_srcdir)/; $$(top_srcdir)/;g' \
			    -e 's; $(top_builddir)/; $$(top_builddir)/;g' \
			    -e 's; \./; ;g' \
			    -e '/^ *\\$$/d' | \
			$(PERL) $(top_srcdir)/wordwrap.pl > .depend; \
	else :; fi

depend:: .depend
	if test -n "$(SRCS)" ; then \
		sed -e '/^# +++ Dependency line eater +++/,$$d' \
			< $(srcdir)/Makefile.in | cat - .depend \
			> $(srcdir)/Makefile.in.new; \
	if cmp -s $(srcdir)/Makefile.in $(srcdir)/Makefile.in.new ; then \
		$(RM) $(srcdir)/Makefile.in.new ; \
	else \
		$(MV) $(srcdir)/Makefile.in $(srcdir)/Makefile.in.old; \
		$(MV) $(srcdir)/Makefile.in.new $(srcdir)/Makefile.in; \
	fi ; else :; fi

# End of file MCONFIG

E2IMAGE_PROG= e2image
E2IMAGE_MAN= e2image.8

SPROGS=		mke2fs badblocks tune2fs dumpe2fs blkid logsave \
			$(E2IMAGE_PROG) fsck 
USPROGS=	mklost+found
SMANPAGES=	tune2fs.8 mklost+found.8 mke2fs.8 dumpe2fs.8 badblocks.8 \
			e2label.8 findfs.8 blkid.8 $(E2IMAGE_MAN) \
			logsave.8 fsck.8

UPROGS=		chattr lsattr uuidgen
UMANPAGES=	chattr.1 lsattr.1 uuidgen.1

TUNE2FS_OBJS=	tune2fs.o util.o
MKLPF_OBJS=	mklost+found.o
MKE2FS_OBJS=	mke2fs.o util.o 
CHATTR_OBJS=	chattr.o
LSATTR_OBJS=	lsattr.o
UUIDGEN_OBJS=	uuidgen.o
DUMPE2FS_OBJS=	dumpe2fs.o
BADBLOCKS_OBJS=	badblocks.o
E2IMAGE_OBJS=	e2image.o
FSCK_OBJS=	fsck.o base_device.o
BLKID_OBJS=	blkid.o

SRCS=	$(srcdir)/tune2fs.c $(srcdir)/mklost+found.c $(srcdir)/mke2fs.c \
		$(srcdir)/chattr.c $(srcdir)/lsattr.c $(srcdir)/dumpe2fs.c \
		$(srcdir)/badblocks.c $(srcdir)/fsck.c $(srcdir)/util.c \
		$(srcdir)/uuidgen.c $(srcdir)/blkid.c

LIBS= $(LIBEXT2FS) $(LIBCOM_ERR) 
DEPLIBS= $(LIBEXT2FS) $(LIBCOM_ERR) 

STATIC_LIBS= $(STATIC_LIBEXT2FS) $(STATIC_LIBCOM_ERR) 
STATIC_DEPLIBS= $(STATIC_LIBEXT2FS) $(STATIC_LIBCOM_ERR) 

LIBS_BLKID= $(LIBBLKID) $(LIBUUID)
DEPLIBS_BLKID= $(LIBBLKID) $(DEPLIBUUID)

LIBS_E2P= $(LIBE2P) $(LIBCOM_ERR) 
DEPLIBS_E2P= $(LIBE2P) $(LIBCOM_ERR) 

.c.o:
	$(CC) -c $(ALL_CFLAGS) $< -o $@

all:: $(SPROGS) $(UPROGS) $(USPROGS) $(SMANPAGES) $(UMANPAGES)

findsuper: findsuper.o
	$(CC) $(ALL_LDFLAGS) -o findsuper findsuper.o

tune2fs: $(TUNE2FS_OBJS) $(DEPLIBS) $(DEPLIBS_E2P) $(DEPLIBS_BLKID)
	$(CC) $(ALL_LDFLAGS) -o tune2fs $(TUNE2FS_OBJS) $(LIBS) \
		$(LIBS_BLKID) $(LIBS_E2P) $(LIBINTL)

blkid: $(BLKID_OBJS) $(DEPLIBS_BLKID)
	$(CC) $(ALL_LDFLAGS) -o blkid $(BLKID_OBJS) $(LIBS_BLKID) $(LIBINTL)

e2image: $(E2IMAGE_OBJS) $(DEPLIBS)
	$(CC) $(ALL_LDFLAGS) -o e2image $(E2IMAGE_OBJS) $(LIBS) $(LIBINTL)

base_device: base_device.c
	$(CC) $(ALL_CFLAGS) $(ALL_LDFLAGS) $(srcdir)/base_device.c \
		-DDEBUG -o base_device

check:: base_device
	./base_device < $(srcdir)/base_device.tst > base_device.out
	cmp $(srcdir)/base_device.tst base_device.out

mklost+found: $(MKLPF_OBJS)
	$(CC) $(ALL_LDFLAGS) -o mklost+found $(MKLPF_OBJS) $(LIBINTL)

mke2fs: $(MKE2FS_OBJS) $(DEPLIBS) $(LIBE2P) $(DEPLIBUUID) $(DEPLIBS_BLKID)
	$(CC) $(ALL_LDFLAGS) -o mke2fs $(MKE2FS_OBJS) $(LIBS) $(LIBS_BLKID) \
		$(LIBE2P) $(LIBUUID) $(LIBINTL)

mke2fs.static: $(MKE2FS_OBJS) $(STATIC_DEPLIBS) $(STATIC_LIBE2P) $(DEPSTATIC_LIBUUID)
	$(CC) $(ALL_LDFLAGS) -static -o mke2fs.static $(MKE2FS_OBJS) \
		$(STATIC_LIBS) $(STATIC_LIBE2P) $(STATIC_LIBUUID) $(LIBINTL)

resize2fs: resize2fs.o $(DEPLIBS)
	$(CC) $(ALL_LDFLAGS) -o resize2fs resize2fs.o $(LIBS) $(LIBINTL)

chattr: $(CHATTR_OBJS) $(DEPLIBS_E2P)
	$(CC) $(ALL_LDFLAGS) -o chattr $(CHATTR_OBJS) $(LIBS_E2P) $(LIBINTL)

lsattr: $(LSATTR_OBJS) $(DEPLIBS_E2P)
	$(CC) $(ALL_LDFLAGS) -o lsattr $(LSATTR_OBJS) $(LIBS_E2P) $(LIBINTL)

uuidgen: $(UUIDGEN_OBJS) $(DEPLIBUUID)
	$(CC) $(ALL_LDFLAGS) -o uuidgen $(UUIDGEN_OBJS) $(LIBUUID) $(LIBINTL)

dumpe2fs: $(DUMPE2FS_OBJS) $(DEPLIBS) $(DEPLIBS_E2P) $(DEPLIBUUID)
	$(CC) $(ALL_LDFLAGS) -o dumpe2fs $(DUMPE2FS_OBJS) $(LIBS) \
		$(LIBS_E2P) $(LIBUUID) $(LIBINTL)

fsck: $(FSCK_OBJS) $(DEBLIBS_BLKID)
	$(CC) $(ALL_LDFLAGS) -o fsck $(FSCK_OBJS) $(LIBS_BLKID) $(LIBINTL)

badblocks: $(BADBLOCKS_OBJS) $(DEPLIBS)
	$(CC) $(ALL_LDFLAGS) -o badblocks $(BADBLOCKS_OBJS) $(LIBS) $(LIBINTL)

logsave: logsave.o
	$(CC) $(ALL_LDFLAGS) -o logsave logsave.o

tune2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/tune2fs.8.in
	$(SUBSTITUTE) $(srcdir)/tune2fs.8.in tune2fs.8

mklost+found.8: $(DEP_SUBSTITUTE) $(srcdir)/mklost+found.8.in
	$(SUBSTITUTE) $(srcdir)/mklost+found.8.in mklost+found.8

mke2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/mke2fs.8.in
	$(SUBSTITUTE) $(srcdir)/mke2fs.8.in mke2fs.8

e2label.8: $(DEP_SUBSTITUTE) $(srcdir)/e2label.8.in
	$(SUBSTITUTE) $(srcdir)/e2label.8.in e2label.8

findfs.8: $(DEP_SUBSTITUTE) $(srcdir)/findfs.8.in
	$(SUBSTITUTE) $(srcdir)/findfs.8.in findfs.8

e2image.8: $(DEP_SUBSTITUTE) $(srcdir)/e2image.8.in
	$(SUBSTITUTE) $(srcdir)/e2image.8.in e2image.8

dumpe2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/dumpe2fs.8.in 
	$(SUBSTITUTE) $(srcdir)/dumpe2fs.8.in dumpe2fs.8

badblocks.8: $(DEP_SUBSTITUTE) $(srcdir)/badblocks.8.in
	$(SUBSTITUTE) $(srcdir)/badblocks.8.in badblocks.8	

fsck.8: $(DEP_SUBSTITUTE) $(srcdir)/fsck.8.in
	$(SUBSTITUTE) $(srcdir)/fsck.8.in fsck.8 

blkid.8: $(DEP_SUBSTITUTE) $(srcdir)/blkid.8.in
	$(SUBSTITUTE) $(srcdir)/blkid.8.in blkid.8

logsave.8: $(DEP_SUBSTITUTE) $(srcdir)/logsave.8.in
	$(SUBSTITUTE) $(srcdir)/logsave.8.in logsave.8

chattr.1: $(DEP_SUBSTITUTE) $(srcdir)/chattr.1.in
	$(SUBSTITUTE) $(srcdir)/chattr.1.in chattr.1 

lsattr.1: $(DEP_SUBSTITUTE) $(srcdir)/lsattr.1.in 
	$(SUBSTITUTE) $(srcdir)/lsattr.1.in lsattr.1 

uuidgen.1: $(DEP_SUBSTITUTE) $(srcdir)/uuidgen.1.in 
	$(SUBSTITUTE) $(srcdir)/uuidgen.1.in uuidgen.1 

blkid.1: $(DEP_SUBSTITUTE) $(srcdir)/blkid.1.in 
	$(SUBSTITUTE) $(srcdir)/blkid.1.in blkid.1 

installdirs:
	$(top_srcdir)/mkinstalldirs $(DESTDIR)$(sbindir) \
		$(DESTDIR)$(root_sbindir) $(DESTDIR)$(bindir) \
		$(DESTDIR)$(man1dir) $(DESTDIR)$(man8dir)

install: all $(SMANPAGES) $(UMANPAGES) installdirs
	for i in $(SPROGS); do \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(root_sbindir)/$$i; \
		$(STRIP) $(DESTDIR)$(root_sbindir)/$$i; \
	done
	for i in $(USPROGS); do \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(sbindir)/$$i; \
		$(STRIP) $(DESTDIR)$(sbindir)/$$i; \
	done
	$(LN) -f $(DESTDIR)$(root_sbindir)/mke2fs \
		$(DESTDIR)$(root_sbindir)/mkfs.ext2
	$(LN) -f $(DESTDIR)$(root_sbindir)/mke2fs \
		$(DESTDIR)$(root_sbindir)/mkfs.ext3
	$(LN) -f $(DESTDIR)$(root_sbindir)/tune2fs \
		$(DESTDIR)$(root_sbindir)/e2label
	$(LN) -f $(DESTDIR)$(root_sbindir)/tune2fs \
		$(DESTDIR)$(root_sbindir)/findfs
	for i in $(UPROGS); do \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(bindir)/$$i; \
		$(STRIP) $(DESTDIR)$(bindir)/$$i; \
	done
	for i in $(SMANPAGES); do \
		for j in $(COMPRESS_EXT); do \
			$(RM) -f $(DESTDIR)$(man8dir)/$$i.$$j; \
		done; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(man8dir)/$$i; \
	done
	$(RM) -f $(DESTDIR)$(man8dir)/mkfs.ext2.8.gz \
		$(DESTDIR)$(man8dir)/mkfs.ext3.8.gz
	$(LN) -f $(DESTDIR)$(man8dir)/mke2fs.8 $(DESTDIR)$(man8dir)/mkfs.ext2.8
	$(LN) -f $(DESTDIR)$(man8dir)/mke2fs.8 $(DESTDIR)$(man8dir)/mkfs.ext3.8
	for i in $(UMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man1dir)/$$i.gz; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(man1dir)/$$i; \
	done

uninstall:
	for i in $(SPROGS); do \
		$(RM) -f $(DESTDIR)$(root_sbindir)/$$i; \
	done
	for i in $(USPROGS); do \
		$(RM) -f $(DESTDIR)$(sbindir)/$$i; \
	done
	$(RM) -f $(DESTDIR)$(root_sbindir)/mkfs.ext2 \
			$(DESTDIR)$(root_sbindir)/mkfs.ext3
	for i in $(UPROGS); do \
		$(RM) -f $(DESTDIR)$(bindir)/$$i; \
	done
	for i in $(SMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man8dir)/$$i; \
	done
	$(RM) -f $(DESTDIR)$(man8dir)/mkfs.ext2.8 \
		$(DESTDIR)$(man8dir)/mkfs.ext3.8
	for i in $(UMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man1dir)/$$i; \
	done

clean:
	$(RM) -f $(SPROGS) $(USPROGS) $(UPROGS) $(UMANPAGES) $(SMANPAGES) \
		base_device base_device.out mke2fs.static \
		\#* *.s *.o *.a *~ core 

mostlyclean: clean
distclean: clean
	$(RM) -f .depend Makefile $(srcdir)/TAGS $(srcdir)/Makefile.in.old

# +++ Dependency line eater +++
# 
# Makefile dependencies follow.  This must be the last section in
# the Makefile.in file
#
tune2fs.o: $(srcdir)/tune2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(top_srcdir)/lib/uuid/uuid.h $(top_srcdir)/lib/e2p/e2p.h \
 $(srcdir)/jfs_user.h $(top_srcdir)/lib/ext2fs/kernel-jbd.h \
 $(top_srcdir)/lib/ext2fs/jfs_compat.h $(top_srcdir)/lib/ext2fs/kernel-list.h \
 $(srcdir)/util.h $(top_srcdir)/lib/blkid/blkid.h \
 $(top_builddir)/lib/blkid/blkid_types.h $(top_srcdir)/version.h \
 $(srcdir)/nls-enable.h
mklost+found.o: $(srcdir)/mklost+found.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/version.h \
 $(srcdir)/nls-enable.h
mke2fs.o: $(srcdir)/mke2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/uuid/uuid.h $(top_srcdir)/lib/e2p/e2p.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/util.h $(top_srcdir)/version.h $(srcdir)/nls-enable.h
chattr.o: $(srcdir)/chattr.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/version.h $(srcdir)/nls-enable.h
lsattr.o: $(srcdir)/lsattr.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/version.h $(srcdir)/nls-enable.h
dumpe2fs.o: $(srcdir)/dumpe2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(top_srcdir)/lib/e2p/e2p.h $(srcdir)/jfs_user.h \
 $(top_srcdir)/lib/ext2fs/kernel-jbd.h $(top_srcdir)/lib/ext2fs/jfs_compat.h \
 $(top_srcdir)/lib/ext2fs/kernel-list.h $(top_srcdir)/lib/uuid/uuid.h \
 $(top_srcdir)/version.h $(srcdir)/nls-enable.h
badblocks.o: $(srcdir)/badblocks.c $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/nls-enable.h
fsck.o: $(srcdir)/fsck.c $(top_srcdir)/version.h $(srcdir)/nls-enable.h \
 $(srcdir)/fsck.h $(top_srcdir)/lib/blkid/blkid.h \
 $(top_builddir)/lib/blkid/blkid_types.h
util.o: $(srcdir)/util.c $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/nls-enable.h \
 $(top_srcdir)/lib/blkid/blkid.h $(top_builddir)/lib/blkid/blkid_types.h \
 $(srcdir)/util.h
uuidgen.o: $(srcdir)/uuidgen.c $(top_srcdir)/lib/uuid/uuid.h \
 $(srcdir)/nls-enable.h
blkid.o: $(srcdir)/blkid.c $(top_srcdir)/lib/blkid/blkid.h \
 $(top_builddir)/lib/blkid/blkid_types.h
