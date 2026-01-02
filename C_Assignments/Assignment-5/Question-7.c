// ============================= ASSIGNMENT - 5 =============================

// Write a program to print greater between two numbers. Print one number if both are the same.

/*
Program: Check greater number between two numbers.
Description: Take two numbers from the user, compare both number, and print the result.

Input      : Take two integers from the user.
Processing : Comparing both integers.
Output     : Print the greater number.
*/

#include <stdio.h>

int main () {
    int number1, number2;

    // Take data from the user
    printf("Enter a two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Checking the number which is greater
    if (number1 > number2)
    {
        printf("Number1 (%d) is greater than Number2 (%d)", number1, number2);
    }
    else if (number2 > number1)
    {
        printf("Number2 (%d) is greater than Number1 (%d)", number2, number1);
    }
    else
    {
        printf("Number1 and number2 both are equal");
    }

    return 0;
}