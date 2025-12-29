// ======================== ASSIGNMENT - 3 ===========================

// Write a program to swap values of two int variables.

/*
Program: Swap values of two integers using a third variable
Description: This program takes two integers from the user and
             swaps their values using a temporary (third) variable.

Input      : Take two integer numbers from the user.
Processing : Swap values using a third variable.
Output     : Print the swapped values.
*/

#include <stdio.h>

int main () {
    int num1, num2, num3;

    // Take data from the user
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swaping the value
    num3 = num1;
    num1 = num2;
    num2 = num3;

    // Display the data
    printf("Swaping value is \n %d and %d", num1, num2);

    return 0;
}