#include "../headers/strlib47.h"

str47 strlib47_replace(char *trgt, char *repl, char *src) {

  str47 ret = strlib47_create("0");
  int64_t exists = strlib47_indexOf(trgt, src);

  if (!trgt || !repl || !src || exists == -1)
    return ret;

  uint64_t t_len = strlib47L_strlen(trgt);

  // Cut src so it stops before the first ocurrence of trgt
  src[exists] = '\0';
  // Copy that slice to ret
  strlib47L_strcpy(src, ret.str);
  // Concatenate the replacement
  ret.str = strlib47L_strcat(repl, ret.str);
  // Concatenate the remainder of the string after the target
  ret.str = strlib47L_strcat(src + exists + t_len - 1, ret.str);

  return ret;
}
