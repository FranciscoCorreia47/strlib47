#include "../headers/strlib47.h"

uint8_t strlib47_isspace(char c) {
  return ((c >= 0x09 && c <= 0x0d) || c == ' ');
}
