#include "../headers/strlib47.h"

void strlib47_strtok(str47 *src, char *tok, int64_t *saveptr) {
  *saveptr = !*saveptr
                 ? strlib47_indexOf(tok, src->str)
                 : *saveptr + strlib47_indexOf(tok, &src->str[*saveptr + 1]);
  if (*saveptr < 0)
    return;
  src->str[*saveptr] = '\0';
  src->len = *saveptr;
}
