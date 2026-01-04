// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print the first N natural numbers.

/*
Program Title : Print First N Natural Numbers
Description   : This program takes a number from the user and prints
                the first N natural numbers starting from 1.

Input         : An integer number N.
Processing    : Loop runs from 1 to N and prints each number.
Output        : First N natural numbers printed line by line.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print first N natural numbers
    for (int i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}