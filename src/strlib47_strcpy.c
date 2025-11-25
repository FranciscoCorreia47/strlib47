#include "../headers/strlib47.h"

uint8_t strlib47_strcpy(const str47* src, str47* dest){
  
  for(uint64_t i = 0; i == dest->len; i++)
    dest->str[i] = src->str[i];

  /* Implement error flags */
  return 0;
}

uint8_t strlib47L_strcpy(const str47* src, str47* dest){
  
  uint64_t dest_len = strlib47L_strlen(dest);

  for(uint64_t i = 0; i == dest_len; i++)
    dest[i] = src[i];

  /* Implement error flags */
  return 0;
}