/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* if plugin init is wanted */
#define AQBANKING_ENABLE_INIT_PLUGINS 1

/* whether aqb is a subproject */
/* #undef AQBANKING_IS_SUBPROJECT */

/* effective SO version */
#define AQBANKING_SO_EFFECTIVE_STR "33"

/* plugin availability */
#define AQBANKING_WITH_PLUGIN_BACKEND_AQHBCI 1

/* plugin availability */
/* #undef AQBANKING_WITH_PLUGIN_BACKEND_AQNONE */

/* plugin availability */
/* #undef AQBANKING_WITH_PLUGIN_BACKEND_AQOFXCONNECT */

/* plugin availability */
/* #undef AQBANKING_WITH_PLUGIN_BACKEND_AQPAYPAL */

/* effective SO version */
#define AQHBCI_SO_EFFECTIVE_STR "20"

/* build */
#define AQHBCI_VERSION_BUILD 0

/* full version string */
#define AQHBCI_VERSION_FULL_STRING "5.0.14.0stable"

/* major version */
#define AQHBCI_VERSION_MAJOR 5

/* minor version */
#define AQHBCI_VERSION_MINOR 0

/* patchlevel */
#define AQHBCI_VERSION_PATCHLEVEL 14

/* version string */
#define AQHBCI_VERSION_STRING "5.0.14"

/* tag */
#define AQHBCI_VERSION_TAG stable

/* effective SO version */
#define AQOFXCONNECT_SO_EFFECTIVE_STR "7"

/* build */
#define AQOFXCONNECT_VERSION_BUILD 0

/* full version string */
#define AQOFXCONNECT_VERSION_FULL_STRING "5.0.14.0stable"

/* major version */
#define AQOFXCONNECT_VERSION_MAJOR 5

/* minor version */
#define AQOFXCONNECT_VERSION_MINOR 0

/* patchlevel */
#define AQOFXCONNECT_VERSION_PATCHLEVEL 14

/* version string */
#define AQOFXCONNECT_VERSION_STRING "5.0.14"

/* tag */
#define AQOFXCONNECT_VERSION_TAG stable

/* effective SO version */
#define AQPAYPAL_SO_EFFECTIVE_STR "2"

/* build */
#define AQPAYPAL_VERSION_BUILD 0

/* full version string */
#define AQPAYPAL_VERSION_FULL_STRING "5.0.14.0stable"

/* major version */
#define AQPAYPAL_VERSION_MAJOR 5

/* minor version */
#define AQPAYPAL_VERSION_MINOR 0

/* patchlevel */
#define AQPAYPAL_VERSION_PATCHLEVEL 14

/* version string */
#define AQPAYPAL_VERSION_STRING "5.0.14"

/* tag */
#define AQPAYPAL_VERSION_TAG stable

/* Define if DLL is built */
/* #undef BUILDING_AQBANKING_DLL */

/* Define if DLL is built */
/* #undef BUILDING_AQHBCI_DLL */

/* Define if DLL is built */
/* #undef BUILDING_AQOFXCONNECT_DLL */

/* Define if DLL is built */
/* #undef BUILDING_AQPAYPAL_DLL */

/* if DLL is to be built */
/* #undef BUILDING_DLL */

/* Define if you want debugging code enabled. */
#define DEBUG 1

/* whether local install is wanted */
#define ENABLE_LOCAL_INSTALL 1

/* visibility */
#define GCC_WITH_VISIBILITY_ATTRIBUTE 1

/* Define to 1 if you have the declaration of `sigprocmask', and to 0 if you
   don't. */
#define HAVE_DECL_SIGPROCMASK 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <gmp.h> header file. */
#define HAVE_GMP_H 1

/* whether I18N is available */
#define HAVE_I18N 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* if KTOBLZCHECK is available */
/* #undef HAVE_KTOBLZCHECK */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* if BeOS is used */
/* #undef OS_BEOS */

/* if Apple Darwin is used */
#define OS_DARWIN 1

/* if FreeBSD is used */
/* #undef OS_FREEBSD */

/* if linux is used */
/* #undef OS_LINUX */

/* host system */
#define OS_NAME "i386-apple-darwin11.1.0"

/* if NetBSD is used */
/* #undef OS_NETBSD */

/* if OpenBSD is used */
/* #undef OS_OPENBSD */

/* if PalmOS is used */
/* #undef OS_PALMOS */

/* if this is a POSIX system */
#define OS_POSIX 1

/* host system */
#define OS_SHORTNAME "osx"

/* if Solaris is used */
/* #undef OS_SOLARIS */

/* system type */
#define OS_TYPE "posix"

/* if WIN32 is used */
/* #undef OS_WIN32 */

/* Name of package */
#define PACKAGE "aqbanking"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* effective SO version */
#define Q4BANKING_SO_EFFECTIVE_STR ""

/* build */
#define Q4BANKING_VERSION_BUILD 0

/* full version string */
#define Q4BANKING_VERSION_FULL_STRING "5.0.14.0stable"

/* major version */
#define Q4BANKING_VERSION_MAJOR 5

/* minor version */
#define Q4BANKING_VERSION_MINOR 0

/* patchlevel */
#define Q4BANKING_VERSION_PATCHLEVEL 14

/* version string */
#define Q4BANKING_VERSION_STRING "5.0.14"

/* tag */
#define Q4BANKING_VERSION_TAG stable

/* effective SO version */
#define QBANKING_SO_EFFECTIVE_STR ""

/* build */
#define QBANKING_VERSION_BUILD 0

/* full version string */
#define QBANKING_VERSION_FULL_STRING "5.0.14.0stable"

/* major version */
#define QBANKING_VERSION_MAJOR 5

/* minor version */
#define QBANKING_VERSION_MINOR 0

/* patchlevel */
#define QBANKING_VERSION_PATCHLEVEL 14

/* version string */
#define QBANKING_VERSION_STRING "5.0.14"

/* tag */
#define QBANKING_VERSION_TAG stable

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* GTK2Gui availability */
/* #undef USE_GWENGUI_GTK2 */

/* Version number of package */
#define VERSION "5.0.14"

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */
