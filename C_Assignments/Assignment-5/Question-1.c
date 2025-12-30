// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is positive or non positive.

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking number is positive or non-positive
    if (number > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-Positive");
    }

    return 0;
}