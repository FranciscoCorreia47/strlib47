#include "../headers/strlib47.h"

uint8_t strlib47_endsWith(str47 src, str47 sub) {
    if (src.len < sub.len)
        return 0;
    
    return (strlib47_indexOf(sub.str, src.str) == src.len - sub.len);
}