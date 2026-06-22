#ifndef STRLIB47_UTILS_H
#define STRLIB47_UTILS_H
#include "strlib47_types.h"

/**
 * @file strlib47_utils.h
 * @brief The header that contains custom utility functions
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
 */
void strlib47_replace(char *trgt, char *repl, char *src);

/**
 * @brief Returns a slice of the src starting on lwr and ending in upr
 * @param lwr The starting position in src.str inclusive
 * @param upr The ending position in src.str exclusive
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
str47_arr strlib47_split(str47 src, char *tok);

/**
 * @brief Joins an str47 array into a singular str47, concatenating all .str
 * together
 * @param sep the separator to add in between the strings
 */
str47 strlib47_join(str47_arr *src, char *sep);

/**
 * @brief Initializes an str47 array with count elements
 * Heap allocated
 */
str47_arr strlib47_init(uint64_t count);

/**
 * @brief Appends an str47 to the end of the str47_arr
 * Stores a copy and frees the original
 */
void strlib47_append(str47 *src, str47_arr *arr);

/**
 * @brief Checks if the character is a space character
 * Meaning ' ' \n \r \f \t \v
 */
uint8_t strlib47_isspace(char c);

/**
 * @brief Checks if the character is alphanumeric
 * Means any letter a-z A-Z or number 0-9
 */
uint8_t strlib47_isalnum(char c);

#endif
