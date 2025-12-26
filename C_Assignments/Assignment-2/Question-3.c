// ========================== ASSIGNMENT - 2 ============================

// Write a program to calculate simple interest.

/*
Program: Find simple interest.
Description: Takes principal amount, rate of interest, and time from the user and prints the simple interest.

Input      : Take three integers from the user.
Processing : calculate simple interest.
Output     : print simple interest.
*/

#include <stdio.h>

int main () {
    int principal, rate, time;
    float interest;

    // Take data from user
    printf("Enter price, rate and time: ");
    scanf("%d %d %d", &principal, &rate, &time);

    // Calculating simple interest
    interest = (principal * rate * time) / 100.0;

    // Display the result
    printf("Simple interest of %d, %d and %d is \n%.2f", principal, rate, time, interest);

    return 0;
}