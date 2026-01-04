// ============================= ASSIGNMENT - 7 =============================

// Write a program to print squares of the first 10 natural numbers.

/*
Program Title : Print Squares of First 10 Natural Numbers

Description :
This program prints the squares of the first 10 natural numbers.
It uses a for loop to iterate from 1 to 10 and calculates the square
of each number by multiplying the number by itself.

Input :
- No input required

Processing :
- Initialize a loop counter from 1 to 10
- Calculate the square of each number (i * i)
- Print the result in multiplication format

Output :
- Display the squares of the first 10 natural numbers
*/

#include <stdio.h>

int main () {
    // Print squares of the first 10 natural number
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d\n", i, i, i*i);
    }
    
    return 0;
}