// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is positive or non positive.

/*
Program: Check given number is positive or non-positive.
Discription: Take a number from the user, check whether it is positive or non-positive, and print the result.

Input      : Take one integer from the user.
Processing : Check whether the number is positive or non-positive.
Output     : Print "Positive" or "Non-Positive" based on condition.
*/

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