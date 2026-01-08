// ============================== ASSIGNMENT - 10 ===============================

// Write a program to print first N terms of the Fibonacci series.
// First term of Fibonacci series is assumed as 0

#include <stdio.h>

// This is first way

int main () {
    int number, first=-1, second=1, next=0;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Printing first N term of the next
    if (number >= 0)
    {
        printf("Fibonacci series is assumed to start with 0 and 1\n");
        printf("Fibonacci series of first %d terms is:\n", number);
        for (int i = 0; i <= number; i++)
        {
            next = first + second;
            printf("%d\n", next);
            first = second;
            second = next;
        }
    }
    else
    {
        printf("Invalid Number");
    }
    
    return 0;
}


// This is second way

// int main () {
//     int number, first=0, second=1, next;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Print first N terms of Fibonacci series
//     if (number >= 0)
//     {
//         printf("Fibonacci series of first %d terms is:\n", number);
//         for (int i = 0; i <= number; i++)
//         {
//             printf("%d\n", first);
//             next = first + second;
//             first = second;
//             second = next;
//         }
//     }
//     else
//     {
//         printf("Invalid Number");
//     }
    
//     return 0;
// }