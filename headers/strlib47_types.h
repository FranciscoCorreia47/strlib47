#ifndef STRLIB47_TYPES_H
#define STRLIB47_TYPES_H
#include <stdint.h>

/**
 * @file The header that contains all types used in the library
 * Includes macros, enums, structs and more
 */

/**
 * @brief The oficial strlib47 string type
*/
typedef struct str47{
    char* str;
    uint64_t len; //=strlib47L_strlen(str);
}str47;

/**
 * @brief Hex char limits - upper case minimum
 * @details This macro defines the minimum hex value a char needs to be greater than for it to be an upper case character
*/
#define UPR_ASCII_CHAR_MIN 0x40

/**
 * @brief Hex char limits - upper case maximum
 * @details This macro defines the maximum hex value a char needs to be smaller than for it to be an upper case character
*/
#define UPR_ASCII_CHAR_MAX 0x58

/**
 * @brief Hex char limits - lower case minimum
 * @details This macro defines the minimum hex value a char needs to be greater than for it to be a lower case character
*/
#define LWR_ASCII_CHAR_MIN 0x60

/**
 * @brief Hex char limits - lower case maximum
 * @details This macro defines the maximum hex value a char needs to be smaller than for it to be a lower case character
*/
#define LWR_ASCII_CHAR_MAX 0x78

#endif