#include "../headers/strlib47.h"

str47 strlib47_replace(char *trgt, char *repl, char *src) {

  str47 ret = strlib47_create("0", ret);
  int64_t exists = strlib47_indexOf(trgt, src);

  if (!trgt || !repl || !src || exists == -1)
    return ret;

  uint64_t t_len = strlib47L_strlen(trgt), r_len = strlib47L_strlen(repl),
           s_len = strlib47L_strlen(src);

  // Cut src so it stops before the first ocurrence of trgt
  src[exists] = "\0";
  // Copy that slice to ret
  ret = strlib47L_strcpy(src, ret);
  // Concatenate the replacement
  ret = strlib47L_strcat(repl, ret);
  // Concatenate the remainder of the string after the target
  ret = strlib47L_strcat(src + exists + t_len - 1, ret);

  return ret;
}
