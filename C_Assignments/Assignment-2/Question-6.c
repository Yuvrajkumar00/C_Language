// ========================== ASSIGNMENT - 2 ============================

// Write a program to input a character from the user and print its ASCII code.

/*
Program: Print ASCII code of a given character.
Description: Take character from the user and print its ASCII code.

Input      : Take a character from the user.
Processing : Find ASCII code of the character.
Output     : print ASCII code of the character.
*/

#include <stdio.h>

int main () {
    char character;

    // Take data from user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Display the data
    printf("ASCII code of a given character of %c is %d", character, character);

    return 0;
}