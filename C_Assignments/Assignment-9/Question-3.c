// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate sum of first N odd natural numbers.

/*
Program Title : Calculate Sum of First N Odd Natural Numbers

Description :
This program accepts an integer N from the user and calculates the sum
of the first N odd natural numbers. The program generates odd numbers
using the formula (2*i - 1) and adds them using a do-while loop.

IPO Cycle :

Input :
- An integer N

Processing :
- Initialize sum to 0 and counter i to 1
- Generate odd numbers using (2*i - 1)
- Add each odd number to sum
- Increment i and repeat until i becomes greater than N

Output :
- Display the sum of the first N odd natural numbers
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number, sum=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N odd natural numbers
//     for (int i = 1; i <= number; i++)
//     {
//         sum = sum + (2*i-1);
//     }

//     //Display the data
//     printf("Sum of first %d odd natural numbers is %d", number, sum);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N odd natural numbers
//     while (i <= number)
//     {
//         sum = sum + (2*i-1);
//         i++;
//     }

//     //    Display the data
//     printf("Sum of first %d odd natural numbers is %d", number, sum);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, sum=0, i=1;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating sum  of first N odd natural numbers
    do
    {
        sum = sum + (2*i-1);
        i++;
    } while (i <= number);

    // Display the data
    printf("Sum of first %d odd natural numbers is %d", number, sum);

    return 0;
}