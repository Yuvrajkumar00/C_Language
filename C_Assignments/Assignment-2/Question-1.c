// ========================== ASSIGNMENT - 2 ============================

// Write a program to calculate average of three integers. Numbers are given by the user.

/*
Program: Find average of three integers
Description: Take three integers from user and print their average 

Input      : Take three integers from user.
Processing : Calculate average of three integers.
Output     : print average
*/

#include <stdio.h>

int main () {
    int num1, num2, num3;
    float average;

    // Take data from user
    printf("Enter a three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating average
    average = (num1 + num2 + num3) / 3.0;

    // Display the data 
    printf("Average of %d, %d and %d is %.2f", num1, num2, num3, average);

    return 0;
}