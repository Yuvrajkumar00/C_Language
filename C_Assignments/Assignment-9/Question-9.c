// =========================== ASSIGNMENT - 9 =============================

// Write a program to calculate LCM of two numbers.


/*
// Program Title : Calculate LCM of Two Numbers

Description :
This program takes two integers as input from the user and calculates 
the Least Common Multiple (LCM) of the two numbers. The program uses 
a do-while loop to find the smallest number that is divisible by both 
input numbers. Edge cases like zero or negative numbers can be handled 
by taking absolute values before calculation.

IPO Cycle :

Input :
- Two integers (num1, num2) from the user

Processing :
- Find the maximum of num1 and num2
- Use a do-while loop to check successive numbers starting from max(num1,num2)
- If a number is divisible by both num1 and num2, it is the LCM
- Break the loop once LCM is found

Output :
- Display the LCM of the two numbers
*/

#include <stdio.h>

// This is first way using for loop

// int main () {
//     int num1, num2, i;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d %d", &num1, &num2);

//     i = num1 > num2 ? num1 : num2;

//     // Calculating LCM of two numbers
//     for ( ; i > 0; i++)
//     {
//         if (i % num1 == 0 && i % num2 == 0)
//         {
//             printf("LCM of a %d and %d is %d", num1, num2, i);
//             break;
//         }
//     }

//     return 0;
// }


// This is second way using while loop

// int main () {
//     int num1, num2, i;

//     // Take data from the user
//     printf("Enter a number: ");
//     scanf("%d %d", &num1, &num2);

//     i = num1 > num2 ? num1 : num2;

//     // Calculating LCM of two numbers
//     while (i > 0)
//     {
//         if (i % num1 == 0 && i % num2 == 0)
//         {
//             printf("LCM of a %d and %d is %d", num1, num2, i);
//             break;
//         }
//         i++;
//     }

//     return 0;
// }


// This is third way using do-while loop

int main () {
    int num1, num2, i;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);

    i = num1 > num2 ? num1 : num2;

    // Calculating LCM of two numbers
    do
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            printf("LCM of a %d and %d is %d", num1, num2, i);
            break;
        } 
        i++;
    } while (i > 0);

    return 0;
}