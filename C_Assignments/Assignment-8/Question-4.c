// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print the first N odd natural numbers.

/*
Program Title : Print First N Odd Natural Numbers
Description   : This program takes a number from the user and prints
                the first N odd natural numbers.

Input         : An integer number N.
Processing    : Loop runs N times and prints odd numbers using formula.
Output        : First N odd natural numbers printed line by line.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print first N odd natural numbers

    // This is first way
    // for (int i = 1; i <= number; i++)
    // {
    //     printf("%d\n", 2*i-1);
    // }

    // This is second way
    for (int i = 1; i <= (2*number-1); i=i+2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}