#include "../headers/strlib47.h"

str47 strlib47_create(char *string) {
  str47 created;

  created.len = strlib47L_strlen(string);

  created.str = (char *)calloc(created.len, sizeof(char));

  strlib47L_strcpy(string, created.str);

  if (!created.str || *string == ' ') {
    created.str = "\0";
    created.len = 0;
    return created;
  }

  return created;
}
