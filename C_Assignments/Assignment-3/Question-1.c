// ======================== ASSIGNMENT - 3 ===========================

// Write a program to calculate size of a character constant.

/*
Program: Find size of character constant.
Description: This program calculates and displays the size of a character constant using the sizeof operator.

Input      : No input required.
Processing : Use sizeof operator on a character constant.
Output     : Print size of character constant in bytes.
*/

#include <stdio.h>

int main () {
    int size;
    size = sizeof('A');

    // Display the data
    printf("Size of character constant is %d bytes", size);

    return 0;
}