#include "../headers/strlib47.h"

str47 strlib47_strtok(str47 *src, char *tok, int64_t *saveptr) {
  int64_t idx1 = strlib47_indexOf(tok, src->str);
  str47 ret = strlib47_create("\0");
  int64_t pos = *saveptr == -2 ? 0 : *saveptr + 1;

  // When it's the first call, *saveptr is -2
  if (*saveptr == -2) {
    // First call and idx is 0, skip to the next token
    if (!idx1) {
      *saveptr = strlib47_indexOf(tok, &src->str[1]);
      if (src->len == 1) {
        // If the string is only the token, do nothing, saveptr will be -1
        return ret;
      }
      // Strip from the right, to eliminate the token at 0
      // and allow future calls to work
      *src = strlib47_create(&src->str[1]);
    } else {
      *saveptr = idx1;
    }
  } else {
    int64_t idx2 = strlib47_indexOf(tok, &src->str[*saveptr + 1]);
    if (idx2 != -1)
      *saveptr += idx2 + 1;
    else
      *saveptr = idx2;
  }

  if (*saveptr == -1)
    return ret;
  ret = strlib47_slice(pos, *saveptr, *src);
  return ret;
}
