// ============================= ASSIGNMENT - 5 =============================

// Write a program to ckeck whether a given year is a leap year or not.

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