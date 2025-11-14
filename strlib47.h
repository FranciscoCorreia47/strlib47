#ifndef STRLIB47_H
#define STRLIB47_H
#include <stdint.h>

/**
 @file The main header file for strlib47.h
 @author Francisco Correia, also known as Ninja47 (by no one)
*/

/**
  @brief Macro definition for readability
  @details This macro defines the minimum hex value a char needs to be greater than for it to be an upper case character
*/
#define UPR_ASCII_CHAR_MIN 0x40

/**
  @brief Macro definition for readability
  @details This macro defines the maximum hex value a char needs to be smaller than for it to be an upper case character
*/
#define UPR_ASCII_CHAR_MAX 0x58

/**
  @brief Macro definition for readability
  @details This macro defines the minimum hex value a char needs to be greater than for it to be a lower case character
*/
#define LWR_ASCII_CHAR_MIN 0x60

/**
  @brief Macro definition for readability
  @details This macro defines the maximum hex value a char needs to be smaller than for it to be a lower case character
*/
#define LWR_ASCII_CHAR_MAX 0x78


/**
 @brief The 'oficial' strlib47 string type
*/
typedef struct{
    char* str;
    uint64_t len; //=strlib47L_strlen(str);
}str47;

/**
 @brief Take a str47 type and return the amount of str47->str characters preceding \0
 @return Length (uint64_t)
*/
const uint64_t strlib47_strlen(const str47* string);

/**
 @brief LEGACY VERSION: Take a char* type and return the amount of characters preceding \0
 @return Length (uint64_t)
*/
const uint64_t strlib47L_strlen(const char* string);

/**
 @brief Compare each and every character of string1->str to string2->str
 @return 1 if equal; 0 if not equal (uint8_t)
*/
const uint8_t strlib47_strcmp(const str47* string1, const str47* string2);

/**
 @brief LEGACY VERSION: Compare each and every character of string1 to string2
 @return 1 if equal; 0 if not equal (uint8_t)
*/
const uint8_t strlib47L_strcmp(const char* string1, const char* string2);

/**
 @brief Copy the contents of src->str to dest->str
 @return void
*/
const uint8_t strlib47_strcpy(const str47* src, str47* dest);

/**
 @brief LEGACY VERSION: Copy the contents of src to dest
 @return void
*/
const uint8_t strlib47L_strcpy(const str47* src, str47* dest);

/** 
 @brief Concatenate str1 to the end of str2, starting on str1's \0
 @return New str47 type with str47->str=str1+str2 and str47->len=strlib47_strlen(*str47)
*/
const str47 strlib47_strcat(const str47* str1, const str47* str2);

/** 
 @brief LEGACY VERSION: Concatenate str1 to the end of str2, starting on str1's \0
 @return A char* that contains the junction of str1 and str2
*/
const char* strlib47L_strcat(const char* str1, const char* str2);

/**
 @brief Transform ch to upper case if ch is a character
 @return Letter in upper case (char) 
*/
const char strlib47_toupper(const char ch);

/**
 @brief Transform ch to lower case if ch is a character
 @return Letter in lower case (char)
*/
const char strlib47_tolower(const char ch);

#endif