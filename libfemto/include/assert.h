#ifndef __ASSERT_H__
#define __ASSERT_H__

#include "stdio.h"
#include "stdlib.h"


#define die(str, ...) ({ \
  printf("%s:%d: " str "\n", __FILE__, __LINE__, ##__VA_ARGS__); exit(-1); })

#define assert(x) ({ if (!(x)) die("assertion failed: %s", #x); })

#endif
