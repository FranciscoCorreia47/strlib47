#include "../headers/strlib47.h"

void strlib47_trim(str47 *src) {
  uint8_t l = 0, r = 0;
  for (uint64_t i = 0; i < src->len; ++i) {
    if (!l && strlib47_isspace(src->str[i])) {
      strlib47L_strcpy(&src->str[i + 1], src->str);
      src->len--;
    } else {
      l = 1;
    }
    if (!r && strlib47_isspace(src->str[src->len - i - 1])) {
      src->str[src->len - i - 1] = '\0';
      src->len--;
    } else {
      r = 1;
    }
    if (!l || !r) {
      i--;
    }
  }
}
