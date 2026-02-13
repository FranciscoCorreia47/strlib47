#include "../headers/strlib47.h"

int64_t strlib47_indexOf(char *trgt, char *search) {
  uint64_t trgt_l = strlib47L_strlen(trgt), srch_l = strlib47L_strlen(search);

  for (uint8_t i = 0; i < srch_l; ++i) {
    if (search[i] == trgt[0]) {
      for (uint64_t x = 0; x < trgt_l; x++) {
        if (trgt[x] != search[i + x])
          break;
        else if (x + 1 == trgt_l)
          return i;
      }
    }
  }
  return -1;
}
