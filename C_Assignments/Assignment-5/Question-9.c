// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether a given year is a leap year or not.

/*
Program: Find leap year.
Description: Take year from the user and check whether it is a leap year or not and then print the result.

Input      : Take year from the user.
Processing : Checking given year is a leap year or not.
Output     : Print whether the year is a leap year or not.
*/

#include <stdio.h>

int main () {
    int year;

    // Take data from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // checking given year is a leap year or not
    if (year % 400 == 0)
    {
        printf("%d is a leap year", year);

    } else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year", year);

    } else 
    {
        printf("%d is not a leap year", year);
    }
    
    return 0;
}