// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 odd natural numbers.

/*
Program Title : Print First 10 Odd Natural Numbers

Description :
This program prints the first 10 odd natural numbers.
It uses a for loop to generate odd numbers using the formula (2*i - 1)
and prints each odd number on a new line.

Input :
- No input required

Processing :
- Initialize a loop counter from 1 to 10
- Generate odd numbers using the formula (2*i - 1)
- Print each generated odd number

Output :
- Display the first 10 odd natural numbers on the screen
*/

#include <stdio.h>

// This is first way
// int main () {
//     // Print first 10 odd natural numbers
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", 2*i-1);
//     }
    
//     return 0;
// }

// This is second way
// int main () {
//     // Print first 10 odd natural numbers
//     for (int i = 1; i <= 19; i=i+2)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }

// This is third way
int main () {
    // Print first 10 odd natural numbers
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i+(i-1));
    }
    
    return 0;
}