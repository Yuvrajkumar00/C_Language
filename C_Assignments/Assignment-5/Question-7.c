// ============================= ASSIGNMENT - 5 =============================

// Write a program to print greater between two numbers. Print one number if both are the same.

#include <stdio.h>

int main () {
    int number1, number2;

    // Take data from the user
    printf("Enter a two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Checking the number which is greater
    if (number1 >= number2)
    {
        printf("Number1 (%d) is greater than or equal to Number2 (%d)", number1, number2);
    }
    else
    {
        printf("Number2 (%d) is greater than Number1 (%d)", number2, number1);
    }

    return 0;
}