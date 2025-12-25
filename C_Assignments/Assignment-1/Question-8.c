// ======================= ASSIGNMENT - 1 ========================

// Write a program to calculate square of a given number. Number is enterd by the user.

/*
Program: Find Square of Number
Description: Read one integer from the user and print their Square

Input      : One Integer (from keyboard)
Processing : Find Square of integer
Output     : Square of integer
*/

#include <stdio.h>

int main () {
    int num, square;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding square
    square = num * num;

    // Display the result
    printf("Square of %d is %d", num, square);

    return 0;
}