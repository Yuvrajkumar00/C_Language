// ============================== ASSIGNMENT - 13 ===============================

// write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.

#include <stdio.h>

int main () {
    char c;

    // Take data from the user
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'A' ... 'Z':
        printf("It is a Uppercase");
        break;
    case 'a' ... 'z':
        printf("It is a Lowercase");
        break;
    case ' ' ... '/':
        printf("It is a Special character");
        break;
    case ':' ... '@':
        printf("It is a Special character");
        break;
    case '[' ... '`':
        printf("It is a Special character");
        break;
    case '{' ... '~':
        printf("It is a Special character");
        break;
    default:
        printf("Invalid character");
    }

    return 0;
}