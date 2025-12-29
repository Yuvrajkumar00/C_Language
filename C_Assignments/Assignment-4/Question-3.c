// ========================= ASSIGNMENT - 4 ==========================

// Write a program to print size of an int, a float, a char and a double type variable.

/*
Program: Find the size of int, float, char and double type variable using sizeof        operator.
Description: This program finds and prints the size of int, float,
char and double type variables using the sizeof operator.

Input      : No input required.
Processing : Finding size of an int, char, float and double type variable.
Output     : Print size of an int, char, float and double type variable.
*/

#include <stdio.h>

int main () {
    int a;
    float b;
    char c;
    double d;

    // Display the data
    printf("Size of int, float, char and double type variable is %d, %d, %d and %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

    return 0;
}