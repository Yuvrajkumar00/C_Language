// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is a three digit number or not.

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking number is three digits or not
    if (number > 99 && number < 1000)
    {
        printf("Number is three digits number");
    }
    else
    {
        printf("It is not a three digits number");
    }

    return 0;
}