#include "../headers/strlib47.h"

str47 strlib47_create(const char* string){
  str47 created;
  created.str = string;
  created.len = strlib47L_strlen(string);
  
  return created;
}