#include "../headers/strlib47.h"

str47 strlib47_strcat(str47 *str1, str47 *str2) {
  if(!str1->str || !str2->str)
    return (str47){.str = "\0", .len = 0};

  str47 ret = {
    .str = (char*)calloc(str1->len + str2->len + 1,  sizeof(char)),
    .len = str1->len + str2->len
  };

  strlib47L_strcpy(str1->str, ret.str);

  strlib47L_strcpy(str2->str, ret.str + str1->len);

  ret.str[ret.len] = '\0';

  return ret;
}

char *strlib47L_strcat(char *str1, char *str2) {
  if(!str1 || !str2)
    return '\0';

  uint64_t len1 = strlib47L_strlen(str1), len2 = strlib47L_strlen(str2);

  char *ret = (char*)calloc(len1 + len2 + 1, sizeof(char));
  strlib47L_strcpy(str1, ret);
  strlib47L_strcpy(str2, ret + len1);

  ret[len1 +  len2] = '\0';

  return ret;
}
