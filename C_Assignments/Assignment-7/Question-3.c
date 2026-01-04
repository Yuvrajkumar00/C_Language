// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 natural numbers in reverse order.

/*
Program Title : Print First 10 Natural Numbers in Reverse Order

Description :
This program prints the first 10 natural numbers in reverse order,
starting from 10 and ending at 1. A for loop is used to decrement
the value and display each number on a new line.

Input :
- No input required

Processing :
- Initialize a loop counter with value 10
- Decrease the counter by 1 in each iteration
- Continue the loop until the counter becomes 1
- Print the value of the counter in each iteration

Output :
- Display the first 10 natural numbers in reverse order on the screen
*/

#include <stdio.h>

// This is first way
// int main () {
//     // Print first 10 natural numbers in reverse order
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }

// This is second way
int main () {
    // Print first 10 natural numbers in reverse order
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 11-i);
    }
    
    return 0;
}