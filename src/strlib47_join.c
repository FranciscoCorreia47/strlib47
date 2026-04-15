#include "../headers/strlib47.h"

str47 strlib47_join(str47 *arr, char *sep) {
  str47 ret = strlib47_create("\0");
  if (!arr || arr->len <= 0)
    return ret;

  strlib47_strcpy(&arr[0], &ret);
  for (uint64_t i = 1; i < arr->len; ++i) {
    ret = strlib47_strcat(&arr[i], &ret);
  }

  return ret;
}
