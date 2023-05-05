#include "library.h"

struct location hasNonAsciiChars(const char* fileName)
{
    const char NEW_LINE = '\n';
    struct location returnValue;
    returnValue.lineNumber = -1;
    returnValue.colNumber = -1;
    returnValue.hasNonAsciiChar = 0;
    returnValue.ch = '\0';
    FILE* ptr;
    char ch;
    ptr = fopen(fileName, "r");

    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
    int lineNum = 1;
    int colNum = 0;

    do {
        ch = fgetc(ptr);
        if (NEW_LINE == ch) {
            lineNum++;
            colNum = 0;
        } else {
            colNum++;
        }
        if (!isascii(ch)) {
            printf("You have non ASCII char in your file at line Number: %d column number: %d\n", lineNum, colNum);
            returnValue.lineNumber = lineNum;
            returnValue.colNumber = colNum;
            returnValue.hasNonAsciiChar = 1;
            returnValue.ch = ch;
            return returnValue;
        }
    } while (ch != EOF);
    fclose(ptr);
    return returnValue;
}
