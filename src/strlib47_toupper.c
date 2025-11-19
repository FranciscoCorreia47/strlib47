#include "../headers/strlib47.h"

char strlib47_tolower(const char c){
  if(c > UPR_ASCII_CHAR_MIN && c < UPR_ASCII_CHAR_MAX)
    return c+0x20;
  else
    return c;
}