/* Output of mkerrcodes.awk.  DO NOT EDIT.  */

static struct
  {
    int err;
    const char *err_sym;
  } err_table[] = 
{
  { 7, "GPG_ERR_E2BIG" },
  { 13, "GPG_ERR_EACCES" },
  { 48, "GPG_ERR_EADDRINUSE" },
  { 49, "GPG_ERR_EADDRNOTAVAIL" },
  { 47, "GPG_ERR_EAFNOSUPPORT" },
  { 35, "GPG_ERR_EAGAIN" },
  { 37, "GPG_ERR_EALREADY" },
  { 80, "GPG_ERR_EAUTH" },
  { 9, "GPG_ERR_EBADF" },
  { 94, "GPG_ERR_EBADMSG" },
  { 72, "GPG_ERR_EBADRPC" },
  { 16, "GPG_ERR_EBUSY" },
  { 89, "GPG_ERR_ECANCELED" },
  { 10, "GPG_ERR_ECHILD" },
  { 53, "GPG_ERR_ECONNABORTED" },
  { 61, "GPG_ERR_ECONNREFUSED" },
  { 54, "GPG_ERR_ECONNRESET" },
  { 11, "GPG_ERR_EDEADLK" },
  { 39, "GPG_ERR_EDESTADDRREQ" },
  { 33, "GPG_ERR_EDOM" },
  { 69, "GPG_ERR_EDQUOT" },
  { 17, "GPG_ERR_EEXIST" },
  { 14, "GPG_ERR_EFAULT" },
  { 27, "GPG_ERR_EFBIG" },
  { 79, "GPG_ERR_EFTYPE" },
  { 64, "GPG_ERR_EHOSTDOWN" },
  { 65, "GPG_ERR_EHOSTUNREACH" },
  { 90, "GPG_ERR_EIDRM" },
  { 92, "GPG_ERR_EILSEQ" },
  { 36, "GPG_ERR_EINPROGRESS" },
  { 4, "GPG_ERR_EINTR" },
  { 22, "GPG_ERR_EINVAL" },
  { 5, "GPG_ERR_EIO" },
  { 56, "GPG_ERR_EISCONN" },
  { 21, "GPG_ERR_EISDIR" },
  { 62, "GPG_ERR_ELOOP" },
  { 24, "GPG_ERR_EMFILE" },
  { 31, "GPG_ERR_EMLINK" },
  { 40, "GPG_ERR_EMSGSIZE" },
  { 95, "GPG_ERR_EMULTIHOP" },
  { 63, "GPG_ERR_ENAMETOOLONG" },
  { 81, "GPG_ERR_ENEEDAUTH" },
  { 50, "GPG_ERR_ENETDOWN" },
  { 52, "GPG_ERR_ENETRESET" },
  { 51, "GPG_ERR_ENETUNREACH" },
  { 23, "GPG_ERR_ENFILE" },
  { 55, "GPG_ERR_ENOBUFS" },
  { 96, "GPG_ERR_ENODATA" },
  { 19, "GPG_ERR_ENODEV" },
  { 2, "GPG_ERR_ENOENT" },
  { 8, "GPG_ERR_ENOEXEC" },
  { 77, "GPG_ERR_ENOLCK" },
  { 97, "GPG_ERR_ENOLINK" },
  { 12, "GPG_ERR_ENOMEM" },
  { 91, "GPG_ERR_ENOMSG" },
  { 42, "GPG_ERR_ENOPROTOOPT" },
  { 28, "GPG_ERR_ENOSPC" },
  { 98, "GPG_ERR_ENOSR" },
  { 99, "GPG_ERR_ENOSTR" },
  { 78, "GPG_ERR_ENOSYS" },
  { 15, "GPG_ERR_ENOTBLK" },
  { 57, "GPG_ERR_ENOTCONN" },
  { 20, "GPG_ERR_ENOTDIR" },
  { 66, "GPG_ERR_ENOTEMPTY" },
  { 38, "GPG_ERR_ENOTSOCK" },
  { 45, "GPG_ERR_ENOTSUP" },
  { 25, "GPG_ERR_ENOTTY" },
  { 6, "GPG_ERR_ENXIO" },
  { 102, "GPG_ERR_EOPNOTSUPP" },
  { 84, "GPG_ERR_EOVERFLOW" },
  { 1, "GPG_ERR_EPERM" },
  { 46, "GPG_ERR_EPFNOSUPPORT" },
  { 32, "GPG_ERR_EPIPE" },
  { 67, "GPG_ERR_EPROCLIM" },
  { 76, "GPG_ERR_EPROCUNAVAIL" },
  { 75, "GPG_ERR_EPROGMISMATCH" },
  { 74, "GPG_ERR_EPROGUNAVAIL" },
  { 100, "GPG_ERR_EPROTO" },
  { 43, "GPG_ERR_EPROTONOSUPPORT" },
  { 41, "GPG_ERR_EPROTOTYPE" },
  { 34, "GPG_ERR_ERANGE" },
  { 71, "GPG_ERR_EREMOTE" },
  { 30, "GPG_ERR_EROFS" },
  { 73, "GPG_ERR_ERPCMISMATCH" },
  { 58, "GPG_ERR_ESHUTDOWN" },
  { 44, "GPG_ERR_ESOCKTNOSUPPORT" },
  { 29, "GPG_ERR_ESPIPE" },
  { 3, "GPG_ERR_ESRCH" },
  { 70, "GPG_ERR_ESTALE" },
  { 101, "GPG_ERR_ETIME" },
  { 60, "GPG_ERR_ETIMEDOUT" },
  { 59, "GPG_ERR_ETOOMANYREFS" },
  { 26, "GPG_ERR_ETXTBSY" },
  { 68, "GPG_ERR_EUSERS" },
  { 35, "GPG_ERR_EWOULDBLOCK" },
  { 18, "GPG_ERR_EXDEV" },
};