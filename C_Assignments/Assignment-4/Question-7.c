// ========================= ASSIGNMENT - 4 ==========================

// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

/*
Program: Rotate a digits of a number by one position towards the right.
Description: Take a number from the user and rotate its digits one position towards the right.

Input      : Take a number from the user.
Processing : Rotating digits of a number from one position towards the right.
Output     : Print new number.
*/

#include <stdio.h>

int main () {
    int number, newNumber=0, lastdigit;

    // Take data from the user
    printf("Enter a three digit number: ");
    scanf("%d", &number);

    // Rotating digits of a number
        lastdigit = number % 10;
        newNumber = (lastdigit * 100) + (number / 10);

    // Display the data
    printf("New number is %d", newNumber);

    return 0;
}