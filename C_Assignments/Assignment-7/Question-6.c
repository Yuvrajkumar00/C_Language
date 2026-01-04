// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 even natural numbers.

/*
Program Title : Print First 10 Even Natural Numbers

Description :
This program prints the first 10 even natural numbers.
It uses a for loop and generates even numbers using the formula (2*i),
then prints each even number on a new line.

Input :
- No input required

Processing :
- Initialize a loop counter from 1 to 10
- Generate even numbers using the formula (2*i)
- Print each generated even number

Output :
- Display the first 10 even natural numbers on the screen
*/

#include <stdio.h>

int main () {
    // Print 10 even natural numbers
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 2*i);
    }
    
    return 0;
}