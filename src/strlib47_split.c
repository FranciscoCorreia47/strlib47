#include "../headers/strlib47.h"

str47_arr strlib47_split(str47 src, char *tok) {
  uint64_t w_count = 0;
  int64_t saveptr = -2;
  *tok = tok == NULL ? ' ' : *tok;

  for (; saveptr != -1; ++w_count)
    strlib47_strtok(&src, tok, &saveptr);
  str47_arr words = strlib47_init(w_count);

  // Reset saveptr
  saveptr = -2;

  for (uint64_t i = 0; saveptr != -1; ++i)
    words.data[i] = strlib47_strtok(&src, tok, &saveptr);

  return words;
}
