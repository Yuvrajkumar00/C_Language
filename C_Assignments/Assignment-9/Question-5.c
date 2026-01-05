// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate sum of cubes of first N natural numbers.

/*
Program Title : Calculate Sum of Cubes of First N Natural Numbers

Description :
This program accepts an integer N from the user and calculates the sum
of the cubes of the first N natural numbers using a for loop.

IPO Cycle :

Input :
- An integer N

Processing :
- Initialize sum to 0
- Use a loop from 1 to N
- Calculate cube of each number (i × i × i)
- Add the cube to sum

Output :
- Display the sum of cubes of the first N natural numbers
*/

#include <stdio.h>

// This is first way using for loop

int main () {
    int number, sum=0;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating sum of cubes of first N natural numbers
    for (int i = 1; i <= number; i++)
    {
        sum = sum + (i*i*i);
    }

    //Display the data
    printf("Sum of cubes of first %d natural numbers is %d", number, sum);

    return 0;
}


// This is second way using while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum of cubes of first N natural numbers
//     while (i <= number)
//     {
//         sum = sum + (i*i*i);
//         i++;
//     }

//     //    Display the data
//     printf("Sum of cubes of first %d natural numbers is %d", number, sum);

//     return 0;
// }


// This is third way using do-while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum of cubes of first N natural numbers
//     do
//     {
//         sum = sum + (i*i*i);
//         i++;
//     } while (i <= number);

//     // Display the data
//     printf("Sum of cubes of first %d natural numbers is %d", number, sum);

//     return 0;
// }