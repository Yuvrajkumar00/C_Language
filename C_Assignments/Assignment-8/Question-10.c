// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print a table of N.

/*
Program Title : Print Multiplication Table of a Number
Description   : This program takes a number from the user and prints
                the multiplication table of that number from 1 to 10.

Input         : An integer number N.
Processing    : Loop runs from 1 to 10 and multiplies N with loop variable.
Output        : Multiplication table of N printed line by line.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print a table of N
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d\n", number, i, number*i);
    }

    return 0;
}