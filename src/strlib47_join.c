#include "../headers/strlib47.h"

str47 strlib47_join(str47_arr *arr, char *sep) {
  str47 ret = strlib47_create("\0");
  uint64_t sep_len = strlib47L_strlen(sep);

  if (!arr || arr->len <= 0)
    return ret;

  strlib47_strcpy(&arr->data[0], &ret);
  ret.str = strlib47L_strcat(ret.str, sep);
  ret.len += sep_len;
  for (uint64_t i = 1; i < arr->len - 1; ++i) {
    ret = strlib47_strcat(&ret, &arr->data[i]);
    ret.str = strlib47L_strcat(ret.str, sep);
    ret.len += sep_len;
  }

  ret = strlib47_strcat(&ret, &arr->data[arr->len - 1]);

  return ret;
}
