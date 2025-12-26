// ========================== ASSIGNMENT - 2 ============================

// Write a program to input three characters from the user and display chracters with their corresponding ASCII codes.

/*
Program: Print ASCII Codes of Three Characters.
Description: This program takes three characters from the user and displays their corresponding ASCII codes.

Input      : take an three character from the user.
Processing : find ASCII code of three character.
Output     : print ASCII code of three character.
*/

#include <stdio.h>

int main () {
    char char1, char2, char3;

    // Take data from user
    printf("Enter a three character: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    // Display the data
    printf("ASCII code of a corresponding character is %c:%d, %c:%d and %c:%d", char1,char1, char2, char2, char3, char3);

    return 0;
}