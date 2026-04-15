#include "../headers/strlib47.h"

str47 *strlib47_split(str47 src, char *tok) {
  uint64_t w_count = 0;
  int64_t saveptr = -2;

  for (; saveptr != -1; ++w_count)
    strlib47_strtok(&src, tok, &saveptr);
  str47 *w_arr = calloc(w_count, sizeof(str47));

  // Reset saveptr
  saveptr = -2;

  for (uint64_t i = 0; saveptr != -1; ++i)
    w_arr[i] = strlib47_strtok(&src, tok, &saveptr);

  return w_arr;
}
