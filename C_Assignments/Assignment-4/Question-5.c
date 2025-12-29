// ========================= ASSIGNMENT - 4 ==========================

// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

/*
Program: Take a number and digit from the user and make a new number.
Description: This program takes a number and digit from the user and append them together and make a new number.

Input      : Take a number and digit from the user.
Processing : Appending a number and digit together and make a new number.
Output     : Print the new number.
*/

#include <stdio.h>

int main () {
    int number, digit, newNumber;

    // Take data from the user
    printf("Enter a number and digit: ");
    scanf("%d %d", &number, &digit);

    // Creating new number using number and digit
    newNumber = (number * 10) + digit;

    // Display the data
    printf("New number is %d", newNumber);

    return 0;
}