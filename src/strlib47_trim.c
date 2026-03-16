#include "../headers/strlib47.h"

// Max: LWR_ASCII_CHAR_MAX
// Min: 0x21
void strlib47_trim(str47 *src) {
  char bak;
  for (uint64_t i = 0; i < src->len; ++i) {
    if (!i) {
      if (strlib47_isspace(src->str[0]) && strlib47_isalnum(src->str[1]))
        strlib47L_strcpy(&src->str[1], src->str);
    } else {
      if (i + 1 != src->len) {
        if (strlib47_isspace(src->str[i]) &&
            strlib47_isalnum(src->str[i + 1]) &&
            strlib47_isalnum(src->str[i - 1]))
          strlib47L_strcpy(&src->str[i + 1], &src->str[i]);
      }
    }
  }
}
