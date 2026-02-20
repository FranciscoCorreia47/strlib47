#include "../headers/strlib47.h"

str47 strlib47_strcat(str47 *str1, str47 *str2) {
  str47 ret = strlib47_create(str1->str);
  ret.len = str1->len + str2->len;

  strlib47L_strcpy(str2->str, ret.str + str1->len);

  ret.str[ret.len] = '\0';

  return ret;
}

char *strlib47L_strcat(char *str1, char *str2) {
  uint64_t len1 = strlib47L_strlen(str1), len2 = strlib47L_strlen(str2);

  char *ret = calloc(len1 + len2);
  ret = strlib47L_strcpy(str1, ret);
  ret = strlib47L_strcpy(str2, ret + len1);

  ret[len1 + len2] = '\0';

  return ret;
}
