## lock-obj-pub.x86_64-apple-darwin14.0.0.h
## File created by gen-posix-lock-obj - DO NOT EDIT
## To be included by mkheader into gpg-error.h

typedef struct
{
  long _vers;
  union {
    volatile char _priv[44];
    long _x_align;
    long *_xp_align;
  } u;
} gpgrt_lock_t;

#define GPGRT_LOCK_INITIALIZER {1,{{167,171,170,50,0,0,0,0, \
                                    0,0,0,0,0,0,0,0, \
                                    0,0,0,0,0,0,0,0, \
                                    0,0,0,0,0,0,0,0, \
                                    0,0,0,0,0,0,0,0, \
                                    0,0,0,0}}}
##
## Local Variables:
## mode: c
## buffer-read-only: t
## End:
##
