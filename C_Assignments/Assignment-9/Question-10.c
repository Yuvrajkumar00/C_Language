// =========================== ASSIGNMENT - 9 =============================

// Write a program to reverse a given number.

/*
// Program Title : Reverse a Given Number

Description :
This program takes an integer input from the user and reverses its digits.
It uses a do-while loop to extract the last digit of the number repeatedly,
builds the reversed number, and stops when all digits are processed. 
The program works for positive numbers; for negative numbers, the sign should 
be handled separately.

IPO Cycle :

Input :
- An integer number from the user

Processing :
- Initialize reverseNumber to 0
- Extract the last digit of the number using modulus 10
- Append the last digit to reverseNumber after multiplying reverseNumber by 10
- Remove the last digit from the number by dividing it by 10
- Repeat until number becomes 0

Output :
- Display the reversed number
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int num, reverseNumber=0, lastdigit;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Reversing a given number
//     for ( ; num > 0; )
//     {
//         lastdigit = num % 10;
//         reverseNumber = reverseNumber * 10 + lastdigit;
//         num = num / 10;
//     }

//     // Display the data
//     printf("Reverse number is %d", reverseNumber);

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int num, reverseNumber=0, lastdigit;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Reversing a given number
//     while (num > 0)
//     {
//         lastdigit = num % 10;
//         reverseNumber = reverseNumber * 10 + lastdigit;
//         num = num / 10;
//     }

//     // Display the data
//     printf("Reverse number is %d", reverseNumber);

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int num, reverseNumber=0, lastdigit;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing a given number
    do
    {
        lastdigit = num % 10;
        reverseNumber = reverseNumber * 10 + lastdigit;
        num = num / 10;
    } while (num > 0);

    // Display the data
    printf("Reverse number is %d", reverseNumber);

    return 0;
}