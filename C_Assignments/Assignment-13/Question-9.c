// ============================== ASSIGNMENT - 13 ===============================

// write a program to check whether a given character is vowel or consonant or other special character, using switch case statement.

#include <stdio.h>

int main () {
    char c;

    // Take data from the user
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("It is a Vowel");
            break;
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
            printf("It is Consonant");
            break;
        default:
            printf("Special character");
    }

    return 0;
}