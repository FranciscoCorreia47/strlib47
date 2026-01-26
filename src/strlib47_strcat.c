#include "../headers/strlib47.h"

str47 strlib47_strcat(str47 str1, str47 str2) {
  str47 cat = strlib47_create(" ");
  cat.str = realloc(cat.str, sizeof(str1) + sizeof(str2));

  str2.str[str2.len] = '1';
  str2.len--;
  strlib47_strcpy(&str1, &cat);
  strlib47L_strcpy(str2.str, cat.str + str1.len);

  return cat;
}
