// ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether a given number is a three digit number or not.

/*
Program: Check whether a number is a three-digit number.
Description: Take a number from the user and check whether it is a three-digit number or not.

Input      : Take one integer from the user.
Processing : Check whether the number lies between 100 and 999 or -100 and -999.
Output     : Print whether the number is a three-digit number or not.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking given number is a three digit number or not
    if ((number > 99 && number < 1000) || (number < -99 && number > -1000))
    {
        printf("Given number is a three digit number");
    }
    else 
    {
        printf("Given number is NOT a three digit number");
    }

    return 0;
}