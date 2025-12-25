// ======================= ASSIGNMENT - 1 ========================

// Write a progrma to calculate sum of two integers. Numbers are taken from user through keyboard.

/*
Program: Sum of Two Integers
Description: Reads two integers from the user and prints their sum.

Input      : Two integers (from keyboard)
Processing : Add the two integers
Output     : Sum of the integers
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Take input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform addition
    sum = num1 + num2;

    // Display the result
    printf("Sum of %d and %d is %d", num1, num2, sum);

    return 0;
}
