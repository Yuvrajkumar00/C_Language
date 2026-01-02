// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is an even number or an odd number without using % operator.

/*
Program: Check whether a given number is even or odd.
Description: Take a number from the user, check whether it is even or odd without using modulo % operator, and print the result.

Input      : Take one integer from the user.
Processing : Check whether the number is even or odd.
Output     : Print "Even" or "Odd" based on condition.
*/

#include <stdio.h>

int main () {
    int number, lastdigit;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding last digit of a given number without using % operator.
    lastdigit = number - (number / 10 * 10);

    // Checking given number is even or odd without using % operator
    if (lastdigit == 0 || lastdigit == 2 || lastdigit == 4 || lastdigit == 6 || lastdigit == 8)
    {
        printf("Given number is Even");
    }
    else 
    {
        printf("Given number is Odd");
    }

    return 0;
}