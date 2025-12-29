// ======================== ASSIGNMENT - 3 ===========================

// Write a program to print unit digit of a given number.

/*
Program: Print unit digit of a given number
Description: This program takes an integer from the user and
             finds its unit (last) digit using the modulus operator.

Input      : Take one integer number from the user.
Processing : Find unit digit using number % 10.
Output     : Print the unit digit of the given number.
*/

#include <stdio.h>

int main () {
    int number, unitDigit;
    
    // Take data from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding unit digit of a given number
    unitDigit = number % 10;

    // Display the output
    printf("Unit digit of a given number %d is \n%d", number, unitDigit);

    return 0;
}