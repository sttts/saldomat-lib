# Makefile.in generated by automake 1.14.1 from Makefile.am.
# src/plugins/backends/aqebics/plugin/client/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





VPATH = /Users/sts/Quellen/mac/hbci/lib/aqbanking/src/plugins/backends/aqebics/plugin/client
am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/aqbanking
pkgincludedir = $(includedir)/aqbanking
pkglibdir = $(libdir)/aqbanking
pkglibexecdir = $(libexecdir)/aqbanking
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-apple-darwin14.0.0
host_triplet = x86_64-apple-darwin14.0.0
noinst_PROGRAMS = testlib$(EXEEXT)
subdir = src/plugins/backends/aqebics/plugin/client
DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/Makefile.am \
	$(top_srcdir)/depcomp $(iheader_HEADERS) $(noinst_HEADERS)
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/acx_compile_warn.m4 \
	$(top_srcdir)/m4/as-scrub-include.m4 \
	$(top_srcdir)/m4/distri.m4 $(top_srcdir)/m4/gwenhywfar.m4 \
	$(top_srcdir)/m4/libtool.m4 $(top_srcdir)/m4/ltoptions.m4 \
	$(top_srcdir)/m4/ltsugar.m4 $(top_srcdir)/m4/ltversion.m4 \
	$(top_srcdir)/m4/lt~obsolete.m4 $(top_srcdir)/m4/os.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
LTLIBRARIES = $(noinst_LTLIBRARIES)
libclient_la_LIBADD =
am_libclient_la_OBJECTS = account.lo user.lo context.lo dialog.lo \
	provider.lo queues.lo
libclient_la_OBJECTS = $(am_libclient_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
PROGRAMS = $(noinst_PROGRAMS)
testlib_SOURCES = testlib.c
testlib_OBJECTS = testlib.$(OBJEXT)
testlib_LDADD = $(LDADD)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(srcdir) -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(libclient_la_SOURCES) testlib.c
DIST_SOURCES = $(libclient_la_SOURCES) testlib.c
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(iheaderdir)"
HEADERS = $(iheader_HEADERS) $(noinst_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/missing aclocal-1.14
ADD_ACLOCAL_FLAGS =  -I /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/share/aclocal
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AQBANKING_CLI_VERSION_STRING = 5.5.0
AQBANKING_SO_AGE = 5
AQBANKING_SO_CURRENT = 39
AQBANKING_SO_EFFECTIVE = 34
AQBANKING_SO_REVISION = 2
AQBANKING_VERSION_BUILD = 2
AQBANKING_VERSION_FULL_STRING = 5.5.0.2
AQBANKING_VERSION_MAJOR = 5
AQBANKING_VERSION_MINOR = 5
AQBANKING_VERSION_PATCHLEVEL = 0
AQBANKING_VERSION_RELEASE_STRING = 5.5.0.2-git
AQBANKING_VERSION_STRING = 5.5.0
AQBANKING_VERSION_TAG = git
AQEBICS_CFLAGS = 
AQEBICS_LIBS = 
AQEBICS_SO_AGE = 1
AQEBICS_SO_CURRENT = 2
AQEBICS_SO_EFFECTIVE = 1
AQEBICS_SO_REVISION = 9
AQEBICS_VERSION_BUILD = 2
AQEBICS_VERSION_FULL_STRING = 5.5.0.2
AQEBICS_VERSION_MAJOR = 5
AQEBICS_VERSION_MINOR = 5
AQEBICS_VERSION_PATCHLEVEL = 0
AQEBICS_VERSION_RELEASE_STRING = 
AQEBICS_VERSION_STRING = 5.5.0
AQEBICS_VERSION_TAG = git
AQHBCI_SO_AGE = 0
AQHBCI_SO_CURRENT = 22
AQHBCI_SO_EFFECTIVE = 22
AQHBCI_SO_REVISION = 0
AQHBCI_VERSION_BUILD = 2
AQHBCI_VERSION_FULL_STRING = 5.5.0.2
AQHBCI_VERSION_MAJOR = 5
AQHBCI_VERSION_MINOR = 5
AQHBCI_VERSION_PATCHLEVEL = 0
AQHBCI_VERSION_RELEASE_STRING = 
AQHBCI_VERSION_STRING = 5.5.0
AQHBCI_VERSION_TAG = git
AQOFXCONNECT_SO_AGE = 0
AQOFXCONNECT_SO_CURRENT = 7
AQOFXCONNECT_SO_EFFECTIVE = 7
AQOFXCONNECT_SO_REVISION = 2
AQOFXCONNECT_VERSION_BUILD = 2
AQOFXCONNECT_VERSION_FULL_STRING = 5.5.0.2
AQOFXCONNECT_VERSION_MAJOR = 5
AQOFXCONNECT_VERSION_MINOR = 5
AQOFXCONNECT_VERSION_PATCHLEVEL = 0
AQOFXCONNECT_VERSION_RELEASE_STRING = 
AQOFXCONNECT_VERSION_STRING = 5.5.0
AQOFXCONNECT_VERSION_TAG = git
AR = ar
AS = as
AUTOCONF = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/missing autoconf
AUTOHEADER = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/missing autoheader
AUTOMAKE = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/missing automake-1.14
AWK = awk
CC = gcc
CCDEPMODE = depmode=none
CFLAGS = -g -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -arch i386 -I/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/include/ -mmacosx-version-min=10.9 -O -Wall
CPP = gcc -E
CPPFLAGS = -g -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -arch i386 -I/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/include/ -mmacosx-version-min=10.9 -O
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=none
CXXFLAGS = -g -O2 -Wall
CYGPATH_W = echo
DATETIME = 20141213135911
DEFS = -DHAVE_CONFIG_H -DLOCALEDIR=\"$(localedir)\"
DEPDIR = .deps
DLLTOOL = false
DOXYGEN_DEFINE = DOXYGEN_HIDE
DOXYGEN_FILE_PATTERNS = *.h *.hpp
DOXYGEN_INPUT = listdoc.h aqbanking5
DOXYGEN_TAGFILES = 
DSYMUTIL = dsymutil
DUMPBIN = 
ECHO_C = \c
ECHO_N = 
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
FGREP = /usr/bin/grep -F
GREP = /usr/bin/grep
GTK2_CFLAGS = 
GTK2_LIBS = 
GWENGUI_GTK2_CFLAGS = 
GWENGUI_GTK2_LIBS = 
GWENHYWFAR_MINIMUM_VERSION = 4.10.0.0
HAVE_GWENGUI_GTK2 = 0
HAVE_I18N = yes
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_DLL_TARGET = 
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LD = /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld
LDFLAGS = -framework CoreFoundation -arch i386 -L/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/lib -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/usr/lib/ -mmacosx-version-min=10.9 -lcharset -liconv -lintl -lgmp -lgpg-error -lgcrypt -lgnutls -lgnutls-openssl -lgwenhywfar
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBXML_CFLAGS = 
LIBXML_LIBS = 
LIBXSLT_CFLAGS = 
LIBXSLT_LIBS = 
LIPO = lipo
LN_S = ln -s
LTLIBOBJS = 
MAKEINFO = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/missing makeinfo
MAKE_DLL_TARGET = 
MAKE_I18N_FILES = no
MANIFEST_TOOL = :
MKDIR_P = /Users/sts/Quellen/mac/hbci/lib/aqbanking/install-sh -c -d
MSGFMT = missing
MSGFMT_SUPPORTS_QT = 
NM = /usr/bin/nm
NMEDIT = nmedit
OBJDUMP = false
OBJEXT = o
OSYSTEM = osx
OS_TYPE = posix
OTOOL = otool
OTOOL64 = :
PACKAGE = aqbanking
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_URL = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
PKG_CONFIG = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/bin/pkg-config
RANLIB = ranlib
RC = no
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/sh
STRIP = strip
STRIPALL = 
TUTORIALS = 
USE_DOT = NO
VERSION = 5.5.0.2-git
XGETTEXT = missing
XMLMERGE = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/bin/xmlmerge
XMLSEC_CFLAGS = 
XMLSEC_LIBS = 
abs_builddir = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2/src/plugins/backends/aqebics/plugin/client
abs_srcdir = /Users/sts/Quellen/mac/hbci/lib/aqbanking/src/plugins/backends/aqebics/plugin/client
abs_top_builddir = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2
abs_top_srcdir = /Users/sts/Quellen/mac/hbci/lib/aqbanking
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
all_includes = -I/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/include/gwenhywfar4
all_libraries = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
aq_distrib_name = 
aq_distrib_tag = 
aq_distrib_version = 
aqbanking_backends = aqhbci
aqbanking_cfg_searchdir = etc
aqbanking_data_searchdir = share
aqbanking_headerdir = ${includedir}/aqbanking5
aqbanking_headerdir_am = $(includedir)/aqbanking5
aqbanking_includes = -I${includedir}/aqbanking5
aqbanking_internal_libs = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2/src/libs/aqbanking/libaqbanking.la
aqbanking_ldflags = -L${libdir}
aqbanking_libs = -laqbanking
aqbanking_locale_searchdir = share/locale
aqbanking_modules = . jobs types
aqbanking_pkgdatadir = ${datadir}/aqbanking
aqbanking_plugin_searchdir = lib/aqbanking/plugins/34
aqbanking_plugindir = ${libdir}/aqbanking/plugins/34
aqbanking_plugins_backends_dirs =  aqhbci
aqbanking_plugins_bankinfo_dirs =  de
aqbanking_plugins_imexporters_dirs =  csv dtaus eri2 ofx openhbci1 swift xmldb yellownet sepa ctxfile q43
aqbanking_plugins_parsers_dirs =  dtaus swift
aqbanking_symlinkdir = $(top_builddir)/aqbanking5
aqbanking_sys_is_windows = 0
aqbankingpp_modules = .
aqebics_datadir = 
aqebics_includes = -I${includedir}/aqbanking5
aqebics_internal_libs = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2/src/plugins/backends/aqebics/plugin/libaqebics.la
aqebics_ldflags = -L${libdir}
aqebics_libs = -laqebics
aqhbci_datadir = 
aqhbci_includes = -I${includedir}/aqbanking5
aqhbci_internal_libs = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2/src/plugins/backends/aqhbci/plugin/libaqhbci.la
aqhbci_ldflags = -L${libdir}
aqhbci_libs = -laqhbci
aqofxconnect_includes = -I${includedir}/aqbanking5
aqofxconnect_internal_libs = /Users/sts/Quellen/mac/hbci/lib/tmp-i386/aqbanking-5.5.0.2/src/plugins/backends/aqofxconnect/plugin/libaqofxconnect.la
aqofxconnect_libs = -L${libdir} -laqofxconnect
bindir = ${exec_prefix}/bin
build = x86_64-apple-darwin14.0.0
build_alias = 
build_cpu = x86_64
build_os = darwin14.0.0
build_vendor = apple
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE}
docpath = /Users/sts/apidoc
dvidir = ${docdir}
exec_prefix = ${prefix}
gmp_libs = -lgmp
gwenhywfar_bindir = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/bin
gwenhywfar_dir = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2
gwenhywfar_has_crypt = yes
gwenhywfar_headers = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/include/gwenhywfar4/gwenhywfar
gwenhywfar_includes = -I/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/include/gwenhywfar4
gwenhywfar_libs = -L/Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/lib -lgwenhywfar
gwenhywfar_plugins = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2/lib/gwenhywfar/plugins/60
host = x86_64-apple-darwin14.0.0
host_alias = 
host_cpu = x86_64
host_os = darwin14.0.0
host_vendor = apple
htmldir = ${docdir}
i18n_libs = 
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /Users/sts/Quellen/mac/hbci/lib/aqbanking/install-sh
ktoblzcheck_CFLAGS = 
ktoblzcheck_LIBS = 
ktoblzcheck_includes = 
ktoblzcheck_libs = 
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /Users/sts/Quellen/mac/hbci/lib/static-build-i386-5.5.0.2
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = /Users/sts/Quellen/mac/hbci/lib/aqbanking/src/plugins/backends/aqebics/plugin/client
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../../../../../
top_builddir = ../../../../../..
top_srcdir = /Users/sts/Quellen/mac/hbci/lib/aqbanking
typemaker2_exe = $(gwenhywfar_bindir)/typemaker2
visibility_cflags = 
with_aqebics = no
with_aqhbci = yes
INCLUDES = -I$(srcdir)/.. -I$(top_builddir) $(gwenhywfar_includes) -I$(aqbanking_symlinkdir) $(AQEBICS_CFLAGS)
AM_CFLAGS = -DBUILDING_AQEBICS 
typefiles = context.xml
noinst_LTLIBRARIES = libclient.la
extra_sources = \
  p_encipher.c \
  p_encipher_e001.c \
  p_encipher_e002.c \
  p_decipher.c \
  p_eu.c \
  p_eu_a004.c \
  p_eu_a005.c \
  p_sign.c \
  p_sign_x001.c \
  p_sign_x002.c \
  p_tools.c \
  r_hia.c \
  r_hia_h002.c \
  r_hia_h003.c \
  r_hpb.c \
  r_hpb_h002.c \
  r_hpb_h003.c \
  r_hpd.c \
  r_hkd.c \
  r_htd.c \
  r_ini.c \
  r_ini_h002.c \
  r_ini_h003.c \
  r_download.c \
  r_download_h002.c \
  r_download_h003.c \
  r_sta.c \
  r_upload.c \
  r_upload_h002.c \
  r_upload_h003.c \
  r_pub.c \
  r_pub_h002.c \
  r_pub_h003.c

EXTRA_DIST = $(typefiles) $(extra_sources)
noinst_HEADERS = \
 account_l.h \
 account_p.h \
 context_l.h \
 context_p.h \
 dialog_l.h \
 dialog_p.h \
 provider_l.h \
 provider_p.h \
 queues_l.h \
 queues_p.h \
 user_l.h \
 user_p.h

iheaderdir = ${includedir}/aqebics/client
iheader_HEADERS = \
 account.h \
 provider.h \
 user.h

libclient_la_SOURCES = \
 account.c \
 user.c \
 context.c \
 dialog.c \
 provider.c \
 queues.c

all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu src/plugins/backends/aqebics/plugin/client/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu src/plugins/backends/aqebics/plugin/client/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

clean-noinstLTLIBRARIES:
	-test -z "$(noinst_LTLIBRARIES)" || rm -f $(noinst_LTLIBRARIES)
	@list='$(noinst_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}

libclient.la: $(libclient_la_OBJECTS) $(libclient_la_DEPENDENCIES) $(EXTRA_libclient_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(LINK)  $(libclient_la_OBJECTS) $(libclient_la_LIBADD) $(LIBS)

clean-noinstPROGRAMS:
	@list='$(noinst_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list

testlib$(EXEEXT): $(testlib_OBJECTS) $(testlib_DEPENDENCIES) $(EXTRA_testlib_DEPENDENCIES) 
	@rm -f testlib$(EXEEXT)
	$(AM_V_CCLD)$(LINK) $(testlib_OBJECTS) $(testlib_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

#include ./$(DEPDIR)/account.Plo
#include ./$(DEPDIR)/context.Plo
#include ./$(DEPDIR)/dialog.Plo
#include ./$(DEPDIR)/provider.Plo
#include ./$(DEPDIR)/queues.Plo
#include ./$(DEPDIR)/testlib.Po
#include ./$(DEPDIR)/user.Plo

.c.o:
#	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
#	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no 
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) 
	$(AM_V_CC)$(COMPILE) -c -o $@ $<

.c.obj:
#	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
#	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no 
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) 
	$(AM_V_CC)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
#	$(AM_V_CC)$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
#	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes 
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) 
	$(AM_V_CC)$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-iheaderHEADERS: $(iheader_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(iheader_HEADERS)'; test -n "$(iheaderdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(iheaderdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(iheaderdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(iheaderdir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(iheaderdir)" || exit $$?; \
	done

uninstall-iheaderHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(iheader_HEADERS)'; test -n "$(iheaderdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(iheaderdir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES) $(PROGRAMS) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(iheaderdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool clean-noinstLTLIBRARIES \
	clean-noinstPROGRAMS mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-iheaderHEADERS

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-iheaderHEADERS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean clean-generic \
	clean-libtool clean-noinstLTLIBRARIES clean-noinstPROGRAMS \
	cscopelist-am ctags ctags-am distclean distclean-compile \
	distclean-generic distclean-libtool distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-iheaderHEADERS install-info install-info-am \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool pdf pdf-am ps ps-am tags tags-am uninstall \
	uninstall-am uninstall-iheaderHEADERS


#types: $(typefiles)
#	typemaker -d static $(typefiles)

types: $(typefiles)
	typemaker $(typefiles)

sources:
	for d in $(SUBDIRS); do \
	  $(MAKE) -C $$d sources; \
	done
	for f in $(libclient_la_SOURCES) $(EXTRA_SOURCES); do \
	  echo $(subdir)/$$f >>$(top_srcdir)/i18nsources; \
	done

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
