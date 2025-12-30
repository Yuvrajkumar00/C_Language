// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is divisible by 5 or not.

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking number is divisible by 5 or not
    if (number % 5 == 0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is NOT divisible by 5");
    }
}