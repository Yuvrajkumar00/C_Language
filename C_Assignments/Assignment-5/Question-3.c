// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is an even number or an odd number.

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking given number is even or odd
    if (number % 2 == 0)
    {
        printf("Number is even");
    }
    else 
    {
        printf("Number is odd");
    }

    return 0;
}