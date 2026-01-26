#include "../headers/strlib47.h"

uint8_t strlib47_strcpy(const str47 *src, str47 *dest) {
  if (!src || !dest || !src->str)
    return 1; // Why no pointers bruv

  char *tmp = reallocarray(dest->str, src->len + 1, sizeof(char));
  if (!tmp)
    return 2; // Why no memory bruv

  dest->str = tmp;
  dest->len = src->len;

  for (uint64_t i = 0; i < src->len; ++i)
    dest->str[i] = src->str[i];

  dest->str[dest->len] = '\0';
  return 0; // Thanks for cooperating
}

uint8_t strlib47L_strcpy(const char *src, char *dest) {
  if (!src || !dest)
    return 1; // Why no pointers bruv

  uint64_t i = 0;
  while (src[i]) {
    dest[i] = src[i];
    ++i;
  }

  dest[i] = '\0';
  return 0; // Thanks for cooperating
}
