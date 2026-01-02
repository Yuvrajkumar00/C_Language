// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is divisible by 5 or not.

/*
Program: Check whether a given number is divisible by 5 or not.
Description: Take a number from the user, check whether it is divisible by 5 or not, and print the result.

Input      : Take one integer from the user.
Processing : Check whether the number is divisible by 5 or not using modulo % operator.
Output     : Print "Divisible" or "Not Divisible" based on condition.
*/

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

    return 0;
}