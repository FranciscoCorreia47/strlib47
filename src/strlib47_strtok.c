#include "../headers/strlib47.h"

str47 strlib47_strtok(str47 *src, char *tok, int64_t *saveptr) {
  if (!src || !tok) return (str47){0};

  int64_t idx1 = strlib47_indexOf(tok, src->str);
  str47 ret = strlib47_create("\0");
  int64_t pos = *saveptr == -2 ? 0 : *saveptr + 1;

  // When it's the first call, *saveptr is -2
  if (*saveptr == -2) {
    // First call and token is at 0, skip to the next token
    if (!idx1) {
      *saveptr = strlib47_indexOf(tok, &src->str[1]);
      if (src->len == 1) {
        // If the string is only the token, do nothing, saveptr will be -1
        return ret;
      }
      // Strip from the right, to eliminate the token at 0
      // and allow future calls to work
      strlib47L_strcpy(&src->str[1], src->str);
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


char* strlib47L_strtok(char *src, char *tok, int64_t *saveptr) {
  if (!src || !tok) return "\0";

  uint64_t len = strlib47L_strlen(src);
  int64_t idx1 = strlib47_indexOf(tok, src);
  int64_t pos = *saveptr == -2 ? 0 : *saveptr + 1;
  char *ret = (char*) calloc(1, sizeof(char));

  // When it's the first call, *saveptr is -2
  if (*saveptr == -2) {
    // First call and token is at 0, skip to the next token
    if (!idx1) {
      *saveptr = strlib47_indexOf(tok, &src[1]);
      if (len == 1) {
        // If the string is only the token, do nothing, saveptr will be -1
        return ret;
      }
      // Trim from the right, to eliminate the token at 0
      // and allow future calls to work
      strlib47L_strcpy(&src[1], src);
    } else {
      *saveptr = idx1;
    }
  } else {
    int64_t idx2 = strlib47_indexOf(tok, &src[*saveptr + 1]);
    if (idx2 != -1)
      *saveptr += idx2 + 1;
    else
      *saveptr = idx2;
  }

  if (*saveptr == -1)
    return ret;
  
  ret = strlib47L_slice(pos, *saveptr, src);
  return ret;
}