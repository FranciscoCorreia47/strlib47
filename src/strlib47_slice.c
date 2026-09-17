#include "../headers/strlib47.h"

str47 strlib47_slice(uint64_t lwr, uint64_t upr, str47 src) {
  str47 ret = strlib47_create("\0");

  if (upr <= lwr || !src.str || upr > src.len) return ret;

  char bak = src.str[upr];
  src.str[upr] = '\0';
  strlib47L_strcpy(&src.str[lwr], ret.str);

  src.str[upr] = bak;

  return ret;
}

char* strlib47L_slice(uint64_t lwr, uint64_t upr, char* src) {
  char *ret = (char*) calloc(1, sizeof(char));

  if (upr <= lwr || !src || upr > strlib47L_strlen(src)) return ret;
  ret = (char*) calloc(upr-lwr+1, sizeof(char));

  char bak = src[upr];
  src[upr] = '\0';
  strlib47L_strcpy(&src[lwr], ret);
  src[upr] = bak;

  return ret;
}