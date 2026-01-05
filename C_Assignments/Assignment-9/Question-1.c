// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate sum of first N natural numbers.

/*
Program Title : Calculate Sum of First N Natural Numbers

Description :
This program accepts an integer N from the user and calculates the sum
of the first N natural numbers. The calculation is done using a
do-while loop by adding numbers from 1 to N.

IPO Cycle :

Input :
- An integer N

Processing :
- Initialize sum to 0 and counter i to 1
- Add i to sum
- Increment i
- Repeat the process until i becomes greater than N

Output :
- Display the sum of the first N natural numbers
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number, sum=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N natural numbers
//     for (int i = 1; i <= number; i++)
//     {
//         sum = sum + i;
//     }

//     // Display the data
//     printf("Sum of first %d natural numbers is %d", number, sum);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, sum=0, i=1;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Calculating sum  of first N natural numbers
//     while (i <= number)
//     {
//         sum = sum + i;
//         i++;
//     }

//     // Display the data
//     printf("Sum of first %d natural numbers is %d", number, sum);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, sum=0, i=1;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating sum  of first N natural numbers
    do
    {
        sum = sum + i;
        i++;
    } while (i <= number);

    // Display the data
    printf("Sum of first %d natural numbers is %d", number, sum);

    return 0;
}