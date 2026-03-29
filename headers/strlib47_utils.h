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

/**
 * @brief Returns a slice of the src starting on lwr and ending in upr
 * @lwr The starting position in src.str inclusive
 * @upr The ending position in src.str exclusive
 * @return str47
 */
str47 strlib47_slice(uint64_t lwr, uint64_t upr, str47 src);

/**
 * @brief Removes preceding and trailing empty spaces, tabs or newline
 * characters
 */
void strlib47_trim(str47 *src);

/**
 * @brief Splits a string into an array of 'words', based on a token
 * @param tok The token that delimits each 'word', if NULL, the default value of
 * " " will be used
 * @return An array of str47s, where .str in each will be a 'word'
 */
str47 *strlib47_split(str47 src, char *tok);

/**
 * @brief Checks if the character is a space character
 */
uint8_t strlib47_isspace(char c);

/**
 * @brief Checks if the character is alphanumeric
 * Means any letter a-z A-Z or number 0-9
 */
uint8_t strlib47_isalnum(char c);
#endif
