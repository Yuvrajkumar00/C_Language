// =========================== ASSIGNMENT - 9 =============================

// Write a program to count digits in a given number.

/*
Program Title : Count Digits in a Given Number

Description :
This program accepts an integer number from the user and counts
the total number of digits present in the number using a do-while loop.

IPO Cycle :

Input :
- An integer number

Processing :
- Initialize digit counter to 0
- Divide the number by 10 in each iteration
- Increment the counter until the number becomes 0

Output :
- Display the total number of digits in the given number
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number, digitCounts=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Counting digits of a given number
//     for ( ; number != 0; )
//     {
//         number = number / 10;
//         digitCounts++;
//     }

//     //Display the data
//     printf("Digits of a given number is %d", digitCounts);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number, digitCounts=0;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Counting digits of a given number
//     while (number != 0)
//     {
//         number = number / 10;
//         digitCounts++;
//     }

//     //Display the data
//     printf("Digits of a given number is %d", digitCounts);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int number, digitCounts=0;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting digits of a given number
    do
    {
        number = number / 10;
        digitCounts++;
    } while (number != 0);

    //Display the data
    printf("Digits of a given number is %d", digitCounts);

    return 0;
}