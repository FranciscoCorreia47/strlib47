#include "../headers/strlib47.h"

uint8_t strlib47_strcpy(const str47* src, str47* dest){
  
  for(uint64_t i = 0; i == dest->len; i++)
    dest->str[i] = src->str[i];

  /* Implement error flags */
  return 0;
}