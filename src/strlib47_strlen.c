#include "../headers/strlib47.h"

void strlib47_strlen(str47 *string) {
  string->len = 0;

  while (*(string->str++)) /* string->str != \0 */
    string->len++;

  for (uint64_t i = string->len + 1; i; --i)
    string->str--; // Reset the pointer to the correct position
}

uint64_t strlib47L_strlen(char *string) {
  uint64_t len = 0;
  while (*(string++))
    len++;

  return len;
}
