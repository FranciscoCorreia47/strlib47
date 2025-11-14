#include "strlib47.h"

const str47 strlib47_strcat(const str47* str1, const str47* str2){
  str47 cat = {
               .str = 0, 
               .len = str1->len + str2->len - 1
              };
  
  for(uint64_t i = str1->len; i; --i)
    cat.str[str1->len - i] = str1->str[str1->len - i];
  
  for(uint64_t i = str2->len; i; --i)
    cat.str[str2->len - i] = str2->str[str2->len - i];
  
  return cat;
}