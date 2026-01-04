// ========================== ASSIGNMENT - 8 ===============================

// Write a program to print MySirG N times on the screen.

/*
Program Title : Print "MySirG" N Times
Description   : This program takes a number from the user and prints
                the string "MySirG" on the screen N times using a loop.

Input         : An integer number N.
Processing    : Loop runs N times and prints "MySirG".
Output        : "MySirG" printed N times.
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print MySirG N times on the screen
    for (int i = 1; i <= number; i++)
    {
        printf("MySirG\n");
    }
    
    return 0;
}