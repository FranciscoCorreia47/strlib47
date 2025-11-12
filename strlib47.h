#ifndef STRLIB47_H
#define STRLIB47_H
#include <stdint.h>

//My custom string type
typedef struct{
    char* str;
    uint64_t len;
}str47;

// @brief Take a str47 type and return the amount of str47->str characters preceding \0
// @return Length (uint64_t)
const uint64_t strlib47_strlen(const str47* string);

// @brief Compare each and every character of string1 to string2
// @return 1 if equal; 0 if not equal (uint8_t)
const uint8_t strlib47_strcmp(const str47* string1, const str47* string2);

// @brief Copy the contents of src to dest
// @return void
const void strlib47_strcpy(const str47* src, str47* dest);

// @brief Transform char to upper case if character
// @return Letter in upper case (char)
const char strlib47_toupper(const char ch);

// @brief Transform char to lower case if character
// @return Letter in lower case (char)
const char strlib47_tolower(const char ch);

// @brief Concatenate str1 to the end of str2, starting on str1's \0
// @return New str47 type with str47->str=str1+str2 and str47->len=strlib47_strlen(*str47)
const char* strlib47_strcat(const str47* str1, const str47* str2);

#endif