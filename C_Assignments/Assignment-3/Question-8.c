// ======================== ASSIGNMENT - 3 ===========================

// Write a program to swap values of two int variables without using a third variable and without using +, - operators.

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