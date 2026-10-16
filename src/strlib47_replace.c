#include "../headers/strlib47.h"

void strlib47_replace(char *trgt, char *repl, str47 *src) {

  int64_t exists = strlib47_indexOf(trgt, src->str);

  if (!trgt || !repl || !src || !src->str || exists == -1)
    return;

  uint64_t t_len = strlib47L_strlen(trgt),
           r_len = strlib47L_strlen(repl);

  src->str[exists] = '\0';
  str47 ret = strlib47_create(src->str);
  ret.str = strlib47L_strcat(ret.str, repl);
  ret.str = strlib47L_strcat(ret.str, src->str + exists + t_len);
  strlib47L_strcpy(ret.str, src->str);
  exists = strlib47_indexOf(trgt, src->str);

  src->len += r_len - t_len;

  while (exists != -1){
    // Cut src so it stops before the first ocurrence of trgt
    src->str[exists] = '\0';
    // Copy that slice to ret
    strlib47L_strcpy(src->str, ret.str);
    // Concatenate the replacement
    ret.str = strlib47L_strcat(ret.str, repl);
    // Concatenate the remainder of the string after the target
    ret.str = strlib47L_strcat(ret.str, src->str + exists + t_len);

    strlib47L_strcpy(ret.str, src->str);

    src->len += r_len - t_len;

    exists = strlib47_indexOf(trgt, src->str);
  }
}