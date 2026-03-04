#include "../headers/strlib47.h"

str47 strlib47_slice(uint64_t lwr, uint64_t upr, str47 src) {
  str47 ret = strlib47_create("0");

  if (upr <= lwr || !src.str)
    return ret;

  char bak = src.str[upr];
  src.str[upr] = '\0';
  strlib47L_strcpy(&src.str[lwr], ret.str);

  src.str[upr] = bak;

  return ret;
}
