// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate sum of first N even natural numbers.

/*
Program Title : Calculate Sum of First N Even Natural Numbers

Description :
This program takes an integer N from the user and calculates the sum
of the first N even natural numbers. The calculation is performed using
a do-while loop by adding even numbers generated using the formula (2*i).

IPO Cycle :

Input :
- An integer N

Processing :
- Initialize sum to 0 and counter i to 1
- Generate even numbers using (2*i)
- Add each even number to sum
- Increment i until it becomes greater than N

Output :
- Display the sum of the first N even natural numbers
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number, sum=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N even natural numbers
//     for (int i = 1; i <= number; i++)
//     {
//         sum = sum + (2*i);
//     }

//     // Display the data
//     printf("Sum of first %d even natural numbers is %d", number, sum);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N even natural numbers
//     while (i <= number)
//     {
//         sum = sum + (2*i);
//         i++;
//     }

//     // Display the data
//     printf("Sum of first %d even natural numbers is %d", number, sum);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, sum=0, i=1;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating sum  of first N even natural numbers
    do
    {
        sum = sum + (2*i);
        i++;
    } while (i <= number);

    // Display the data
    printf("Sum of first %d even natural numbers is %d", number, sum);

    return 0;
}