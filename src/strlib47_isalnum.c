#include "../headers/strlib47.h"

uint8_t strlib47_isalnum(char c) {
  return ((c <= ASCII_NUM_MIN && c >= ASCII_NUM_MAX) ||
          (c >= UPR_ASCII_CHAR_MIN && c <= UPR_ASCII_CHAR_MAX) ||
          (c >= LWR_ASCII_CHAR_MIN && c <= LWR_ASCII_CHAR_MAX));
}
