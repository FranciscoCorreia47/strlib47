#include "strlib47.h"

const void strlib47_strlen(str47* string){
  string->len = 0;
  while(string->str++)
    string->len++;
  string->len++;
}