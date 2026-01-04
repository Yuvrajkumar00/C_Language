// ============================= ASSIGNMENT - 7 =============================

// Write a program to print the first 10 odd natural numbers in reverse order.

/*
Program Title : Print First 10 Odd Natural Numbers in Reverse Order

Description :
This program prints the first 10 odd natural numbers in reverse order.
It uses a loop to generate odd numbers and displays them from the largest
odd number (19) to the smallest odd number (1).

Input :
- No input required

Processing :
- Use a loop to generate the first 10 odd natural numbers
- Reverse the order by calculating odd numbers from 19 to 1
- Print each odd number on a new line

Output :
- Display the first 10 odd natural numbers in reverse order
*/

#include <stdio.h>

// This is first way
// int main () {
//     // Print first 10 odd natural numbers in reverse order
//     for (int i = 10; i >= 1; i--)
//     {
//         printf("%d\n", 2*i-1);
//     }
    
//     return 0;
// }

// This is second way
// int main () {
//     // Print first 10 odd natural numbers in reverse order
//     for (int i = 19; i >= 1; i=i-2)
//     {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }

// This is third way
// int main () {
//     // Print first 10 odd natural numbers in reverse order
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", 20-(2*i-1));
//     }
    
//     return 0;
// }

// This is fouth way
int main () {
    // Print first 10 odd natural numbers in reverse order
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 22-(2*i+1));
    }
    
    return 0;
}