#include "../headers/strlib47.h"

char strlib47_toupper(const char c){
  if(c > LWR_ASCII_CHAR_MIN && c < LWR_ASCII_CHAR_MAX)
    return c-0x20;
  else
    return c;
}