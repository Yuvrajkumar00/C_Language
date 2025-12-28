// ======================== ASSIGNMENT - 3 ===========================

// Write a program to calculate size of a character constant.

/*
Program: Find size of character constant.
Description: 
*/

#include <stdio.h>

int main () {
    int size;
    size = sizeof('A');

    // Display the data
    printf("Size of character constant is %d bytes", size);

    return 0;
}