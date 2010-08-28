/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if the compiler is building for multiple architectures of Apple
   platforms at once. */
/* #undef AA_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
#define BITSIZEOF_PTRDIFF_T 32

/* Define to the number of bits in type 'sig_atomic_t'. */
#define BITSIZEOF_SIG_ATOMIC_T 32

/* Define to the number of bits in type 'size_t'. */
#define BITSIZEOF_SIZE_T 32

/* Define to the number of bits in type 'wchar_t'. */
#define BITSIZEOF_WCHAR_T 32

/* Define to the number of bits in type 'wint_t'. */
#define BITSIZEOF_WINT_T 32

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if ungetc is broken when used on arbitrary bytes. */
/* #undef FUNC_UNGETC_BROKEN */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define to 1 when using the gnulib module ioctl. */
#define GNULIB_IOCTL 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Hard-code for src/cfg/. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 0

/* Define to 1 if you have the declaration of `flockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FLOCKFILE 1

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 0

/* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_FREEADDRINFO 1

/* Define to 1 if you have the declaration of `funlockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FUNLOCKFILE 1

/* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERROR 1

/* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETADDRINFO 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#define HAVE_DECL_GETDELIM 0

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#define HAVE_DECL_GETLINE 0

/* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETNAMEINFO 1

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
   don't. */
#define HAVE_DECL_GETPASS 1

/* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
   don't. */
#define HAVE_DECL_INET_NTOP 1

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strerror', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRERROR */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the declaration of `__fsetlocking', and to 0 if you
   don't. */
#define HAVE_DECL___FSETLOCKING 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `funlockfile' function. */
#define HAVE_FUNLOCKFILE 1

/* Define to 1 if you have the `getdelim' function. */
/* #undef HAVE_GETDELIM */

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `getservbyname' function. */
#define HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Hard-code for src/cfg/. */
#define HAVE_LIMITS_H 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Hard-code for src/cfg/. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_LIMITS_H */

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
#define HAVE_MINMAX_IN_SYS_PARAM_H 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <random.h> header file. */
/* #undef HAVE_RANDOM_H */

/* Define if you have the readline library. */
#define HAVE_READLINE 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define if the 'realloc' function is POSIX compliant. */
#define HAVE_REALLOC_POSIX 1

/* Define to 1 if the system has the type `sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the `scm_gc_malloc_pointerless' function. */
/* #undef HAVE_SCM_GC_MALLOC_POINTERLESS */

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
#define HAVE_SIGNED_SIG_ATOMIC_T 1

/* Define to 1 if 'wchar_t' is a signed integer type. */
#define HAVE_SIGNED_WCHAR_T 1

/* Define to 1 if 'wint_t' is a signed integer type. */
#define HAVE_SIGNED_WINT_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
/* #undef HAVE_STDIO_EXT_H */

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Hard-code for src/cfg/. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strnlen' function. */
/* #undef HAVE_STRNLEN */

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if the system has the type `struct random_data'. */
/* #undef HAVE_STRUCT_RANDOM_DATA */

/* Define to 1 if `struct sockaddr' is a member of `sa_len'. */
#define HAVE_STRUCT_SOCKADDR_SA_LEN 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the `tcsetattr' function. */
#define HAVE_TCSETATTR 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if the system has the type `uint'. */
#define HAVE_UINT 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
/* #undef HAVE_WCSNLEN */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_ftime' function. */
/* #undef HAVE__FTIME */

/* Define to 1 if you have the `__fsetlocking' function. */
/* #undef HAVE___FSETLOCKING */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "gnutls"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnutls@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GnuTLS"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GnuTLS 2.8.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gnutls"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.8.5"

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
#define PTRDIFF_T_SUFFIX 

/* Define this to 1 if strerror is broken. */
/* #undef REPLACE_STRERROR */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
#define SIG_ATOMIC_T_SUFFIX 

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
#define SIZE_T_SUFFIX ul

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Version number of package */
#define VERSION "2.8.5"

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
#define WCHAR_T_SUFFIX 

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
#define WINT_T_SUFFIX 

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to 500 only on HP-UX. */
/* #undef _XOPEN_SOURCE */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to a replacement function name for getpass(). */
#define getpass gnu_getpass

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to rpl_gmtime if the replacement function should be used. */
/* #undef gmtime */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for MacOS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to rpl_localtime if the replacement function should be used. */
/* #undef localtime */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict, even
   though the corresponding Sun C compiler does, which causes
   "#define restrict _Restrict" in the previous line.  Perhaps some future
   version of Sun C++ will work with _Restrict; if so, it'll probably
   define __RESTRICT, just as Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a marker that can be attached to function parameter declarations
   for parameters that are not used.  This helps to reduce warnings, such as
   from GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _UNUSED_PARAMETER_ __attribute__ ((__unused__))
#else
# define _UNUSED_PARAMETER_
#endif


/* Define as a macro for copying va_list variables. */
/* #undef va_copy */
