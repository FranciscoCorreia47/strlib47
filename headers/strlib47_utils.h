#ifndef STRLIB47_UTILS_H
#define STRLIB47_UTILS_H
#include "strlib47_types.h"

/**
 * @file strlib47_utils.h
 * @brief The header that contains custom utilities
 */

/**
 * @brief Creates a new str47
 * @param string the base value to create the str47
 * @return a new str47 struct with .str = string & len =
 * strlib47L_strlen(string)
 */
str47 strlib47_create(char *string);

/**
 * @brief Search a text for a sequence of characters
 * @param trgt the sequence to search
 * @param search the string to search on
 * @return the index of trgt in search or -1 if not found
 */
int64_t strlib47_indexOf(char *trgt, char *search);

#endif
