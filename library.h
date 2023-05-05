#ifndef DETECT_FOREIGN_CHARS_LIB_LIBRARY_H
#define DETECT_FOREIGN_CHARS_LIB_LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct location {
    int lineNumber;
    int colNumber;
    int hasNonAsciiChar;
    char ch;
};

struct location hasNonAsciiChars(const char* fileName);

#endif //DETECT_FOREIGN_CHARS_LIB_LIBRARY_H
