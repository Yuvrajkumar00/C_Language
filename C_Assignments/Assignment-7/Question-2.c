// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 natural numbers.

/*
Program Title : Print First 10 Natural Numbers

Description :
This program prints the first 10 natural numbers starting from 1 to 10.
A for loop is used to display each number on a new line.

Input :
- No input required

Processing :
- Initialize a loop counter from 1
- Repeat the loop until the counter reaches 10
- Print the value of the counter in each iteration

Output :
- Display the first 10 natural numbers on the screen
*/

#include <stdio.h>

int main () {
    // Print first 10 natural numbers
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}