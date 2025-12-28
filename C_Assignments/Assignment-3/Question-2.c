// ======================== ASSIGNMENT - 3 ===========================

// Write a program to calculate size of a real constant.

/*
Program: Find size of real constant.
Description: 
*/

#include <stdio.h>

int main () {
    int size;
    size = sizeof(2.5);

    // Display the data
    printf("Size of real constant is %d bytes", size);

    return 0;
}