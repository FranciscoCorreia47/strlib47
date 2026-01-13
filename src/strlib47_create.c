#include "../headers/strlib47.h"

str47 strlib47_create(char *string) {
  str47 created;

  created.str = (char *)calloc(strlib47L_strlen(string), sizeof(char));

  strlib47L_strcpy(string, created.str);
  created.len = strlib47L_strlen(string);

  if (!created.str) {
    created.str = "\0";
    created.len = 0;
    return created;
  }

  return created;
}
