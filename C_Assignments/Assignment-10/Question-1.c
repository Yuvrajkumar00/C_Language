// ============================== ASSIGNMENT - 10 ===============================

// Write a program to find the Nth term of the Fibonacci series.
// First term of Fibonacci series is assumed as 0

#include <stdio.h>

// This is first way

int main () {
    int number, first=-1, second=1, fibonacci=0;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding fibonacci of Nth term
    if (number >= 0)
    {
        for (int i = 0; i <= number; i++)
        {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }

        printf("Fibonacci series is assumed to start with 0 and 1\n");
        printf("Fibonacci series of %dth is %d", number, fibonacci);
    }
    else
    {
        printf("Invalid Number");
    }
    
    return 0;
}


// This is second way

// int main () {
//     int number, first=0, second=1, fibonacci=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Finding fibonacci of Nth term
//     if (number == 0)
//     {
//         printf("Fibonacci series 0th term is 0");
//     }
//     else if (number == 1)
//     {
//         printf("Fibonacci series 1th term is 1");
//     }
//     else if (number >= 2)
//     {
//         for (int i = 2; i <= number; i++)
//         {
//             fibonacci = first + second;
//             first = second;
//             second = fibonacci;
//         }

//         printf("Fibonacci series is assumed to start with 0 and 1\n");
//         printf("Fibonacci series of %dth is %d", number, fibonacci);
//     }
//     else
//     {
//         printf("Invalid Number");
//     }
    
//     return 0;
// }