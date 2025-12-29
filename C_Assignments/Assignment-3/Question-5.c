// ======================== ASSIGNMENT - 3 ===========================

// Write a program to print a given number without its last digit.

/*
Program: Print a number without its last digit
Description: This program takes an integer from the user and
             prints the number after removing its last digit
             using integer division.

Input      : Take one integer number from the user.
Processing : Remove last digit using number / 10.
Output     : Print the number without its last digit.
*/

#include <stdio.h>

int main () {
    int number, newDigit;
    
    // Take data from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding unit digit of a given number
    newDigit = number / 10;

    // Display the output
    printf("New digit without its last digit is %d", newDigit);

    return 0;
}