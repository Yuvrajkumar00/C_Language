// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print the first N odd natural numbers in reverse order.

/*
Program Title : Print First N Odd Natural Numbers in Reverse Order
Description   : This program takes a number from the user and prints
                the first N odd natural numbers in reverse order.

Input         : An integer number N.
Processing    : Loop runs from N to 1 and prints odd numbers using formula.
Output        : First N odd natural numbers printed in reverse order.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print first N odd natural numbers in reverse order

    // This is first way
    // for (int i = 1; i <= number; i++)
    // {
    //     printf("%d\n", (2*number) - (2*i-1) );
    // }

    // This is second way
    // for (int i = number; i >= 1; i--)
    // {
    //     printf("%d\n", (2*i)-1 );
    // }

    // This is third way
    for (int i = (2*number-1); i >= 1; i=i-2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}