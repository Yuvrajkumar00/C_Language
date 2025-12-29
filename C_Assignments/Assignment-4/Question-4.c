// ========================= ASSIGNMENT - 4 ==========================

// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

/*
Program: Take a number from the user and make its last digit zero.
Description: This program takes a number from the user and
makes its last digit zero.

Input      : Take a number from the user.
Processing : Take a number from the user and make a new number which last digit is zero.
Output     : Print the new number which have last digit will be zero.
*/

#include <stdio.h>

int main () {
    int number, newNumber;
    
    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Creating a new number with zero last digit
    newNumber = (number / 10) * 10;

    // Display the data
    printf("New number with zero last digit is %d", newNumber);

    return 0;
}
