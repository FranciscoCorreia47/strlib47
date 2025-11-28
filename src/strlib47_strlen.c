#include "../headers/strlib47.h"

void strlib47_strlen(str47* string){
  string->len = 0;
  
  while(string->str++) /* string->str != \0 */
    string->len++;
  
  string->len++;
}

uint64_t strlib47L_strlen(char* string){
  uint64_t len = 0;
  while(*(string++))
    len++;
  len++;

  return len;
}