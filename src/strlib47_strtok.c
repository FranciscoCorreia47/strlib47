#include "../headers/strlib47.h"

void strlib47_strtok(str47 *src, char *tok, int64_t *saveptr) {
  int64_t idx1 = strlib47_indexOf(tok, src->str);
  int64_t idx2 = strlib47_indexOf(tok, &src->str[*saveptr + 1]);

  // When it's the first call, *saveptr is -2
  // First call and idx is 0, skip to the next token
  if (*saveptr == -2) {
    if (!idx1) {
      *saveptr = strlib47_indexOf(tok, &src->str[1]);
      if (src->len == 1)
        return; // If the string is only the token, do nothing, saveptr will be
                // -1
      *src = strlib47_create(&src->str[1]);
    } else {
      *saveptr = idx1;
    }
  } else {
    if (idx2 != -1)
      *saveptr += idx2 + 1;
    else
      *saveptr = idx2;
  }

  if (*saveptr == -1)
    return;
  src->str[*saveptr] = '\0';
  src->len = *saveptr;
}

// ,hello,world
