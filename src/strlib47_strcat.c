#include "../headers/strlib47.h"

str47 strlib47_strcat(str47 *str1, str47 *str2) {
  str47 ret = strlib47_create(str1->str);
  ret.len = str1->len + str2->len;

  strlib47L_strcpy(str2->str, ret.str + str1->len);

  ret.str[ret.len] = '\0';

  return ret;
}
