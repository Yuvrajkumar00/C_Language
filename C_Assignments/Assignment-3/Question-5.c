// ======================== ASSIGNMENT - 3 ===========================

// Write a program to print a given number without its last digit.

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