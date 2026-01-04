// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print the first N even natural numbers.

/*
Program Title : Print First N Even Natural Numbers
Description   : This program takes a number from the user and prints
                the first N even natural numbers.

Input         : An integer number N.
Processing    : Loop runs N times and prints even numbers using formula.
Output        : First N even natural numbers printed line by line.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print first N even natural numbers

    // This is first way
    // for (int i = 1; i <= number; i++)
    // {
    //     printf("%d\n", 2*i);
    // }

    // This is second way
    for (int i = 2; i <= 2*number; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}