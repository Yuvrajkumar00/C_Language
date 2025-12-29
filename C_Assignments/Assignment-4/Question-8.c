// ========================= ASSIGNMENT - 4 ==========================

// What will be the value stored in the variable x after executing following statement:
// x = 10 > 8 > 4;

/*
Program: Evaluate relational expression x = 10 > 8 > 4
Description: This program evaluates a relational expression
and prints the value stored in variable x.

Input      : No input required.
Processing : Evaluate the relational expression step by step.
Output     : Print the value of x.
*/

#include <stdio.h>

int main () {
    int x = 10 > 8 > 4;

    // Display the data
    printf("Output of the statement is %d", x);

    return 0;
}