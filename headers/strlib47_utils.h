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
 * @brief Search a text for a sequence of characters and return the index
 * @param trgt the sequence to search
 * @param search the string to search on
 * @return the index of trgt in search or -1 if not found
 */
int64_t strlib47_indexOf(char *trgt, char *search);

/**
 * @brief Replace all the ocurrences of a substring in a text for a given string
 * @param trgt the substring that will be replaced
 * @param repl the replacement for trgt
 * @param src the text where substring is contained
 * @return 1 on success, 0 on failure
 */
str47 strlib47_replace(char *trgt, char *repl, char *src);

#endif
