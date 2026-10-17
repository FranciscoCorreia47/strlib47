#include "../headers/strlib47.h"

uint8_t strlib47_ispunctuation(char c) {
	return (c >= 0x21 && c <= 0x27) || (c >= 0x3a && c <= 0x40) || 
		(c == 0x5b || c == 0x5d) || (c == 0x7b || c == 0x7d);
}
