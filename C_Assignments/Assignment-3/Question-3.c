// ======================== ASSIGNMENT - 3 ===========================

// write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

/*
Program: Change character value using increment operator
Description: This program assigns 'A' to a character variable
             and changes its value to 'B' using the increment operator.

Input      : No input required.
Processing : Increment the character variable using ++ operator.
Output     : Print the updated character value.
*/

#include <stdio.h>

int main () {
    char character = 'A';
    character++;

    // Display the data
    printf("New character is %c", character);

    return 0;
}