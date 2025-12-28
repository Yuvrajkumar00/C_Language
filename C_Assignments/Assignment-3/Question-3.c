// ======================== ASSIGNMENT - 3 ===========================

// write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.


#include <stdio.h>

int main () {
    char character = 'A';
    character++;

    // Display the data
    printf("New character is %c", character);

    return 0;
}