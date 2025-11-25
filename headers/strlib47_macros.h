#ifndef STRLIB47_MACROS_H
#define STRLIB47_MACROS_H
#include "strlib47.h"

/**
 * @file strlib47_macros.h
 * @brief The header that contains all macros used accross the library
 */

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