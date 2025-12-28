// ======================== ASSIGNMENT - 3 ===========================

// Write a program to print unit digit of a given number.

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