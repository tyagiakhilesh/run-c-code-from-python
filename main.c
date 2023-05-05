//
// Created by Akhilesh Tyagi on 05/05/23.
//
#include "library.h"

int main(int argc, char *argv[])
{
    char *filename = "/Users/akhilesht/work/repo/joplin/README.md";
    struct location result = hasNonAsciiChars(filename);
    printf("result has hasNonAsciiChar %d\n", result.hasNonAsciiChar);
    if (result.hasNonAsciiChar) {
        printf("At line number %d\n", result.lineNumber);
        printf("At col number %d\n", result.colNumber);
        printf("Char is %d\n", result.colNumber);
    }
    return 0;
}
