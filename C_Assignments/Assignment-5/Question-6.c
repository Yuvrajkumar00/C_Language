// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given number is a three digit number or not.

/*
Program: Check whether a given number is a three digit number or not.
Description: Take a number from the user, check whether it is a three digit number or not, and print the result.

Input      : Take one integer from the user.
Processing : Check whether the number is three digit or not.
Output     : Print the result "Number is three digit or Not".
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking number is three digits or not
    if ((number > 99 && number < 1000) || 
        (number < -99 && number > -1000))
    {
        printf("Number is three digits number");
    }
    else
    {
        printf("It is not a three digits number");
    }

    return 0;
}