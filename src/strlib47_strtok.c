#include "../headers/strlib47.h"

void strlib47_strtok(str47 *src, char *tok, int64_t *saveptr) {
  int64_t idx1 = strlib47_indexOf(tok, src->str);
  int64_t idx2 = strlib47_indexOf(tok, &src->str[*saveptr + 1]);

  if (!*saveptr) {
    if (!idx1)
      *saveptr = idx2;
    else
      *saveptr = idx1;
  } else {
    if (idx2 != -1)
      *saveptr += idx2 + 1;
    else
      *saveptr = idx2;
  }

  if (*saveptr < 0)
    return;
  src->str[*saveptr] = '\0';
  src->len = *saveptr;
}

// ,hello,world
