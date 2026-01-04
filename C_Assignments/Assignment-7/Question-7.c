// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 even natural numbers in reverse order.

/*
Program Title : Print First 10 Even Natural Numbers in Reverse Order

Description :
This program prints the first 10 even natural numbers in reverse order.
It uses a for loop to generate even numbers in decreasing order, starting
from 20 and ending at 2.

Input :
- No input required

Processing :
- Initialize a loop counter from 10 down to 1
- Generate even numbers using the formula (2*i)
- Print each even number in reverse order

Output :
- Display the first 10 even natural numbers in reverse order
*/

#include <stdio.h>

// This is first way
// int main () {
//     // Print 10 even natural numbers in reverse order
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("%d\n", 2*i);
//     }
    
//     return 0;
// }

// This is second way
// int main () {
//     // Print 10 even natural numbers in reverse order
//     for (int i = 20; i >= 2; i=i-2)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }

// This is third way
int main () {
    // Print 10 even natural numbers in reverse order
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 22-(2*i) );
    }
    
    return 0;
}