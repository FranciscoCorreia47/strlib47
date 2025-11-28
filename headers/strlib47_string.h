#ifndef STRLIB47_STRING_H
#define STRLIB47_STRING_H
#include <stdint.h>
#include "strlib47_types.h"

/**
 * @file The header that contains string.h equivalent functions
 * Includes both str47 based functions and char* based ones (LEGACY VERSION)
*/

/**
 * @brief Take a str47 type and return the amount of str47->str characters preceding \0
 * @return Length of string->str (uint64_t)
*/
void strlib47_strlen(str47* string);

/**
 * @brief LEGACY VERSION: Take a char* type and return the amount of characters preceding \0
 * @return Length (uint64_t)
*/
uint64_t strlib47L_strlen(char* string);

/**
 * @brief Compare each and every character of string1->str to string2->str
 * @return 1 if equal; 0 if not equal (uint8_t)
*/
uint8_t strlib47_strcmp(const str47* string1, const str47* string2);

/**
 * @brief LEGACY VERSION: Compare each and every character of string1 to string2
 * @return 1 if equal; 0 if not equal (uint8_t)
*/
uint8_t strlib47L_strcmp(const char* string1, const char* string2);

/**
 * @brief Copy the contents of src->str to dest->str
 * @return Error Flag or 0
*/
uint8_t strlib47_strcpy(const str47* src, str47* dest);

/**
 * @brief LEGACY VERSION: Copy the contents of src to dest
 * @return Error Flag or 0
*/
uint8_t strlib47L_strcpy(const str47* src, str47* dest);

/**
 * @brief Concatenate str1 to the end of str2, starting on str1's \0
 * @return New str47 type with str47->str=str1+str2 and str47->len=strlib47_strlen(*str47)
*/
str47 strlib47_strcat(const str47* str1, const str47* str2);

/**
 * @brief LEGACY VERSION: Concatenate str1 to the end of str2, starting on str1's \0
 * @return A char* that contains the junction of str1 and str2
*/
char* strlib47L_strcat(const char* str1, const char* str2);

/**
 * @brief Transform ch to upper case if ch is a character
 * @return Letter in upper case (char) 
*/
char strlib47_toupper(const char ch);

/**
 * @brief Transform ch to lower case if ch is a character
 * @return Letter in lower case (char)
*/
char strlib47_tolower(const char ch);

#endif