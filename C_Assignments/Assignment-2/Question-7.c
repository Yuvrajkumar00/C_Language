// ========================== ASSIGNMENT - 2 ============================

// Write a program to input an ASCII code from the user and print its corresponding character.

/*
Program: Print character corresponding to ASCII code.
Description: Take ASCII code from ther user and print its corresponding character.

Input      : take an ASCII code from the user.
Processing : find character according to ASCII code.
Output     : print character according to ASCII code.
*/

#include <stdio.h>

int main () {
    int asciiCode;
    
    // Take data from user
    printf("Enter a ASCII code: ");
    scanf("%d", &asciiCode);

    // Display the data
    printf("Corresponding character of ASCII code %d is %c", asciiCode, asciiCode);

    return 0;
}