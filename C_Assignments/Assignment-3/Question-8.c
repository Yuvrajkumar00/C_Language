// ======================== ASSIGNMENT - 3 ===========================

// Write a program to swap values of two int variables without using a third variable and without using +, - operators.

/*
Program: Swap values of two integers without using a third variable
         and without using +, - operators
Description: This program takes two integers from the user and
             swaps their values using multiplication and division
             without using a temporary variable.

Input      : Take two integer numbers from the user.
Processing : Swap values using * and / operators.
Output     : Print the swapped values.
*/

#include <stdio.h>

int main () {
    int num1, num2;

    // Take data from the user
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swaping the value
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    // Display the data
    printf("Swaping value without using third variable and without using +, - operators is \n%d and %d", num1, num2);

    return 0;
}