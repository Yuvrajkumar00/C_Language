// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print the squares of the first N natural numbers.

/*
Program Title : Print Squares of the First N Natural Numbers
Description   : This program takes a number from the user and prints
                the squares of the first N natural numbers.

Input         : An integer number N.
Processing    : Loop runs from 1 to N and calculates square of each number.
Output        : Squares of the first N natural numbers printed line by line.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print squares of the N natural numbers
    for (int i = 1; i <= number; i++)
    {
        printf("%d*%d = %d\n", i, i, i*i);
    }

    return 0;
}