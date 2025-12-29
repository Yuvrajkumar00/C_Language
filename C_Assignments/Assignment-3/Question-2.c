// ======================== ASSIGNMENT - 3 ===========================

// Write a program to calculate size of a real constant.

/*
Program: Find size of a real constant
Description: This program calculates and prints the size of a
             real (floating-point) constant using the sizeof operator.

Input      : No input required.
Processing : Use sizeof operator on a real constant.
Output     : Print size of real constant in bytes.
*/

#include <stdio.h>

int main () {
    int size;
    size = sizeof(2.5);

    // Display the data
    printf("Size of real constant is %d bytes", size);

    return 0;
}