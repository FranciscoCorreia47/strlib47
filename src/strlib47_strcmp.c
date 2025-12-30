#include "../headers/strlib47.h"

uint8_t strlib47L_strcmp(char *string1, char *string2) {

  uint64_t len1 = strlib47L_strlen(string1), len2 = strlib47L_strlen(string2);

  if (len1 != len2)
    return 2;

  for (uint64_t i = 0; i < len1; ++i)
    if (string1[i] != string2[i])
      return 0;

  return 1;
}

uint8_t strlib47_strcmp(str47 *string1, str47 *string2) {

  if (string1->len != string2->len)
    return 2;

  for (uint64_t i = 0; i < string1->len; ++i)
    if (string1->str[i] != string2->str[i])
      return 0;

  return 1;
}
