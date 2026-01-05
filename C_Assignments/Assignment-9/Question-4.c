// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate sum of squares of first N natural numbers.

/*
Program Title : Calculate Sum of Squares of First N Natural Numbers

Description :
This program takes an integer N from the user and calculates the sum
of the squares of the first N natural numbers. Each number is squared
and added using a do-while loop.

IPO Cycle :

Input :
- An integer N

Processing :
- Initialize sum to 0 and counter i to 1
- Calculate square of each number (i * i)
- Add the square to sum
- Increment i until it becomes greater than N

Output :
- Display the sum of squares of the first N natural numbers
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number, sum=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum of squares of first N natural numbers
//     for (int i = 1; i <= number; i++)
//     {
//         sum = sum + (i*i);
//     }

//     //Display the data
//     printf("Sum of squares of first %d natural numbers is %d", number, sum);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum of squares of first N natural numbers
//     while (i <= number)
//     {
//         sum = sum + (i*i);
//         i++;
//     }

//     //    Display the data
//     printf("Sum of squares of first %d natural numbers is %d", number, sum);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, sum=0, i=1;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating sum of squares of first N natural numbers
    do
    {
        sum = sum + (i*i);
        i++;
    } while (i <= number);

    // Display the data
    printf("Sum of squares of first %d natural numbers is %d", number, sum);

    return 0;
}