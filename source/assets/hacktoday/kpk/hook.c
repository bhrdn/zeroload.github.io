#define _GNU_SOURCE

#include <dlfcn.h>
#include <stdio.h>

size_t
fwrite (const void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream)
{
  size_t (*orig_fwrite) (const void *restrict, size_t, size_t, FILE *restrict);
  orig_fwrite = dlsym(RTLD_NEXT, "fwrite");
  orig_fwrite(ptr, size, nitems, stdout);
  return orig_fwrite(ptr, size, nitems, stream);
}