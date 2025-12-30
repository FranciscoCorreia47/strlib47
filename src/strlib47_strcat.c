#include "../headers/strlib47.h"

str47 strlib47_strcat(str47 *str1, str47 *str2) {
  char strInit = 0;

  str47 cat = {.str = &strInit, .len = str1->len + str2->len - 1};

  for (uint64_t i = str1->len; i; --i)
    cat.str[str1->len - i] = str1->str[str1->len - i];

  for (uint64_t i = str2->len; i; --i)
    cat.str[str1->len + str2->len - i] = str2->str[str2->len - i];

  return cat;
}
