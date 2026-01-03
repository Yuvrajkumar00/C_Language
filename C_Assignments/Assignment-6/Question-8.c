// ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit or a special character.

/*
Program Title : Check Character Type

Description :
This program takes a single character as input from the user and determines
whether it is an uppercase alphabet (A-Z), a lowercase alphabet (a-z), a digit (0-9),
or a special character. It then displays the result to the user.

Input :
- A single character from the user

Processing :
- Check if the character is between 'A' and 'Z' → uppercase
- Check if the character is between 'a' and 'z' → lowercase
- Check if the character is between '0' and '9' → digit
- If the character falls in the ASCII range of special characters → special character
- Otherwise, classify as invalid character

Output :
- Display "Given character is a uppercase"
- Display "Given character is a lowercase"
- Display "Given character is a digit"
- Display "Given character is a special character"
- Display "Invalid character" if outside ASCII range
*/

#include <stdio.h>

int main () {
    char character;

    // Take data from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Checking given character is a uppercase, lowercase, digit or special character
    if (character >= 65 && character <= 90)
    {
        printf("Given character is a uppercase");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("Given character is a lowercase");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("Given character is a digit");
    }
    else if((character >= 32 && character <= 47) ||
            (character >= 58 && character <= 64) || 
            (character >= 91 && character <= 96) || 
            (character >= 123 && character <= 126))
    {
        printf("Given character is a special character");
    }
    else
    {
        printf("Invalid character");
    }
    
    return 0;
}