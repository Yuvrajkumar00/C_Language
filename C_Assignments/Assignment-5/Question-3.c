// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is an even number or an odd number.

/*
Program: Check whether a given number is even or odd.
Description: Take a number from the user, check whether it is even or odd using modulo % operator, and print the result.

Input      : Take one integer from the user.
Processing : Check whether the number is even or odd.
Output     : Print "Even" or "Odd" based on condition.
*/

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