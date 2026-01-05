// =========================== ASSIGNMENT - 9 =============================

// Write a program to check whether a given number is a prime number or not.

/*
Program Title : Check Whether a Number is Prime or Not

Description :
This program takes an integer number from the user and checks whether
the given number is a prime number or not. A prime number is a number
greater than 1 that has only two factors: 1 and itself. The program
uses a do-while loop to test divisibility of the number by integers
starting from 2 up to one less than the given number.

IPO Cycle :

Input :
- An integer number entered by the user

Processing :
- Check if the number is equal to 2
- If not, divide the number by integers starting from 2
- If the number is divisible by any integer other than 1 and itself,
  then it is not a prime number
- If no divisor is found, the number is prime

Output :
- Display whether the given number is a Prime number or NOT a Prime number
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int number;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Checking a given number is a prime number or not
//     if (number == 2)
//     {
//         printf("Given number is a Prime number");
//     }
//     else
//     {
//         int i;
//         for (i = 2; i < number; i++)
//         {
//             if (number % i == 0)
//             {
//                 printf("Given number is not a Prime number");
//                 break;
//             }
//         }
//         if (i == number)
//         {
//             printf("Given number is Prime number");
//         }
//     }

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int number;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Checking a given number is a prime number or not
//     if (number == 2)
//     {
//         printf("Given number is a Prime number");
//     }
//     else
//     {
//         int i=2;
//         while (i < number)
//         {
//             if (number % i == 0)
//             {
//                 printf("Given number is NOT a Prime number");
//                 break;
//             }
//             i++;
//         }
//         if (i == number)
//         {
//             printf("Given number is Prime number");
//         }
//     }

//     return 0;
// }


// This is second way using while loop

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking a given number is a prime number or not
    if (number == 2)
    {
        printf("Given number is a Prime number");
    }
    else
    {
        int i=2;
        do
        {
            if (number % i == 0)
            {
                printf("Given number is NOT a Prime number");
                break;
            }
            i++;
        } while (i < number);
        
        if (i == number)
        {
            printf("Given number is Prime number");
        }
    }

    return 0;
}