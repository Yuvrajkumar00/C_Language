// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate factorial of a number.

/*
Program Title : Calculate Factorial of a Number

Description :
This program accepts an integer from the user and calculates its factorial
using a do-while loop. Factorial of a number N is the product of all
positive integers from 1 to N.

IPO Cycle :

Input :
- An integer number

Processing :
- Initialize factorial to 1
- Initialize counter i to 1
- Multiply factorial by i in each iteration
- Increment i until it becomes greater than the number

Output :
- Display the factorial of the given number
*/

#include <stdio.h>

// This is first way using while loop

// int main () {
//     int number, factorial=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating factorial of numbers
//     for (int i = 1; i <= number; i++)
//     {
//         factorial = factorial * i;;
//     }

//     //Display the data
//     printf("Factorial of a number is %d", factorial);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, factorial=1, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating factorial of numbers
//     while (i <= number)
//     {
//         factorial = factorial * i;
//         i++;
//     }

//     //Display the data
//     printf("Factorial of a number is %d", factorial);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, factorial=1, i=1;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating factorial of numbers
    do
    {
        factorial = factorial * i;
        i++;
    } while (i <= number);

    //Display the data
    printf("Factorial of a number is %d", factorial);

    return 0;
}