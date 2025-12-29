// ======================== ASSIGNMENT - 3 ===========================

// Write a program to swap values of two int variables in single line arithmetic expression.

/*
Program: Swap two integers using single-line arithmetic expression
Description: This program takes two integer values from the user and swaps their values without using a third variable, using a single-line arithmetic expression. After swapping, the program displays the updated values.

Input      : Take two integers from the user.
Processing : Swap the values of the two integers using a single-line arithmetic expression without using a third variable.
Output     : Print the swapped values of the two integers.
*/

#include <stdio.h>

int main () {
    int num1, num2;

    // Take data from user
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swaping values
    // num1 = (num1+num2) - (num2 = (num1+num2) - num2);
    num2 = (num1+num2) - (num1 = num2);

    // Display the data
    printf("Swaping values without using third variable and in a single line arithmetic expression is \n%d and %d", num1, num2);

    return 0;
}