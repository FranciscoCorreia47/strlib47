#ifndef STRLIB47_H
#define STRLIB47_H
#include "strlib47_string.h"
#include "strlib47_macros.h"
#include "strlib47_utils.h"
#include <stdint.h>

/**
 @file The main header file for strlib47.h
 @author Francisco Correia, also known as Ninja47 (by no one)
*/

/**
 * @brief The oficial strlib47 string type
*/
typedef struct str47{
    char* str;
    uint64_t len; //=strlib47L_strlen(str);
}str47;

#endif