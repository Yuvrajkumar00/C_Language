// ========================= ASSIGNMENT - 4 ==========================

// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

/*
Program: Convert INR to USD.
Description: This program take amount in INR from the user and convert them into USD.

Input      : Take a amount in INR from the user.
Processing : Converting INR amount into USD.
Output     : Print USD amount.
*/

#include <stdio.h>

int main () {
    float amount, USD;

    // Take data from the user
    printf("Enter a amount in INR: ");
    scanf("%f", &amount);

    // Converting INR amount into USD
    USD = amount / 84.23;

    // Display the data
    printf("%.2f INR = %.2f USD", amount, USD);

    return 0;
}