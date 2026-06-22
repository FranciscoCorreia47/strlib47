#include "../headers/strlib47.h"

str47_arr strlib47_init(uint64_t count) {
  if (!count)
    return (str47_arr){.data = (str47 *)NULL, .len = 0};
  str47_arr ret = {.data = calloc(count, sizeof(str47)), .len = count};

  return ret;
}
