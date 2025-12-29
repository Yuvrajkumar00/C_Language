// ========================= ASSIGNMENT - 4 ==========================

// Write a program to input a three digit number and display the sum of the digits.

/*
Program: Sum of three digits number.
Description: Take three digits number from the user and sum of the digits.

Input      : Take three digits number from the user.
Processing : Calculating the sum of the three digits number.
Output     : Print the sum of three digits number.   
*/

#include <stdio.h>

int main () {
    int number, sum = 0;

    // Take data from the user
    printf("Enter a three digits number: ");
    scanf("%d", &number);

    // Calculating the sum of three digits number
    for (int i = 1; i <= 3; i++)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }

    // Display the data
    printf("Sum of three digits number is \n%d", sum);

    return 0;
}