// ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether a given number is divisible by 7 or divisible by 3.

/*
Program Title : Check Divisibility by 7 or 3

Description :
This program takes an integer as input from the user and checks whether the 
number is divisible by 7 or by 3. It displays an appropriate message based on 
the result.

Input :
- An integer number from the user

Processing :
- Check if the number is divisible by 7 (number % 7 == 0)
- Check if the number is divisible by 3 (number % 3 == 0)
- If either condition is true, the number is divisible by 7 or 3
- Otherwise, it is not divisible by 7 or 3

Output :
- Display "Given number is divisible by 7 or 3" if true
- Display "Given number is not divisible by 7 or 3" if false
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking number is divisible by 7 or 3
    if (number % 7 == 0 || number % 3 == 0)
    {
        printf("Given number is divisible by 7 or 3");
    }
    else
    {
        printf("Given number is not divisible by 7 or 3");
    }

    return 0;
}