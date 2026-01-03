// ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether a given number is positive, negative or zero.

/*
Program Title : Check Positive, Negative, or Zero

Description :
This program takes an integer as input from the user and checks whether the 
number is positive, negative, or zero. It then displays the appropriate message 
based on the result.

Input :
- An integer number from the user

Processing :
- If the number is greater than 0, it is positive
- If the number is less than 0, it is negative
- If the number is 0, it is zero

Output :
- Display "Given number is a positive number"
- Display "Given number is a negative number"
- Display "Given number is zero"
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking given number is a positive, negative or zero
    if (number > 0)
    {
        printf("Given number is a positive number");
    }
    else if (number < 0)
    {
        printf("Given number is a negative number");
    }
    else
    {
        printf("Given number is zero");
    }
    
    return 0;
}