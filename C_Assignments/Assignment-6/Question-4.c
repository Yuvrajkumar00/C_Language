// ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether given alphabet is in uppercase or lowercase.

/*
Program Title : Check Uppercase or Lowercase Alphabet

Description :
This program accepts a single character from the user. It checks whether the
character is an uppercase alphabet (A-Z), a lowercase alphabet (a-z), or an
invalid character (not a letter). The program then displays the result.

Input :
- A single character from the user

Processing :
- Check if the character is between 'A' and 'Z' → uppercase
- Check if the character is between 'a' and 'z' → lowercase
- If neither, classify as invalid character

Output :
- Display "Given character is in uppercase"
- Display "Given character is in lowercase"
- Display "Invalid character"
*/

#include <stdio.h>

int main () {
    char character;

    // Take data from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Checking given character is in uppercase or lowercase
    if (character >= 65 && character <= 90)
    {
        printf("Given character is in uppercase");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("Given character is in lowercase");
    }
    else
    {
        printf("Invalid character");
    }
    
    return 0;
}