#!/bin/sh

srcdir="$1"
builddir="$2"


# --------------------------------------------------------------------------
#
# code
#

rm -Rf aqbanking5 2>/dev/null

# The prefix to the source code (=srcdir)
sprefix=`( cd ${srcdir} ; pwd )`

# The prefix to the build directory (=builddir)
bprefix=`pwd`


# --------------------------------------------------------------------------
#
# functions
#

symlinkFolder () {
  local dfiles
  local src
  local dst
  
  src="$1"
  dst="$2"

  dfiles=`( cd "${sprefix}/${src}" && ls 2>/dev/null )`
  for f in $dfiles; do
    if test -d "${src}/${f}"; then
      case "$f" in
        . | .. | CVS | .* | bin | tools)
          ;;
        *)
          symlinkFolder "${src}/${f}" "${dst}"
          ;;
      esac
    else
      case "${f}" in
        *_p.h | *_l.h | *.ui.h | version.h | system.h)
          ;;
        *.ui)
          AQ_HEADER_FILES="${AQ_HEADER_FILES} ${dst}/${f}.h"
          ln -s "${bprefix}/${src}/${f}.h" "${dst}/${f}.h"
          ;;
        version.h.in)
          AQ_HEADER_FILES="${AQ_HEADER_FILES} ${dst}/version.h"
          ln -s "${bprefix}/${src}/version.h" "${dst}/version.h"
          ;;
        system.h.in)
          AQ_HEADER_FILES="${AQ_HEADER_FILES} ${dst}/system.h"
          ln -s "${bprefix}/${src}/system.h" "${dst}/system.h"
          ;;
        *.h)
          AQ_HEADER_FILES="${AQ_HEADER_FILES} ${dst}/${f}"
          ln -s "${sprefix}/${src}/${f}" "${dst}/${f}"
          ;;
      esac
    fi
    
  done
  
}



# symlink all headers from src/lib/aqbanking
AQ_HEADER_FILES="${sprefix}/version.h ${sprefix}/system.h"
mkdir -p aqbanking5/aqbanking
symlinkFolder "src/libs/aqbanking" "aqbanking5/aqbanking"
ln -s "${bprefix}/version.h" aqbanking5/aqbanking/version.h
ln -s "${bprefix}/system.h" aqbanking5/aqbanking/system.h
ln -s "${bprefix}/src/libs/aqbanking/backendsupport/ab_jobqueue.h" aqbanking5/aqbanking
ln -s "${bprefix}/src/libs/aqbanking/backendsupport/ab_accountqueue.h" aqbanking5/aqbanking
ln -s "${bprefix}/src/libs/aqbanking/backendsupport/ab_userqueue.h" aqbanking5/aqbanking

# symlink all headers from src/plugins/backends/
dirlist='aqhbci'  # list might be empty
for backend in ${dirlist} ; do
  mkdir -p aqbanking5/${backend}
  if [ -d "src/plugins/backends/${backend}/plugin" ] ; then
    symlinkFolder "src/plugins/backends/${backend}/plugin" "aqbanking5/${backend}"
    # symlink all subfolders
    for f in src/plugins/backends/${backend}/plugin/*; do
      if [ -d "src/plugins/backends/${backend}/plugin/$f" ] ; then
        case $f in
          .libs | .deps)
            ;;
          *)
            symlinkFolder "src/plugins/backends/${backend}/plugin/$f" "aqbanking5/${backend}"
            ;;
        esac
      fi
    done
  fi
  
done



rm -f sl-headers 2>/dev/null
for i in ${AQ_HEADER_FILES}; do
  echo "$i" >>sl-headers
done


