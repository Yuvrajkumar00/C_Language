// ============================= ASSIGNMENT - 7 =============================

// Write a program to print a table of 5.

/*
Program Title : Print Table of 5

Description :
This program prints the multiplication table of 5 from 1 to 10.
It uses a for loop to multiply 5 with numbers from 1 to 10 and
displays the result in table format.

Input :
- No input required

Processing :
- Initialize a loop counter from 1 to 10
- Multiply 5 with the loop counter
- Print the multiplication result

Output :
- Display the multiplication table of 5
*/

#include <stdio.h>

int main () {
    // Print table of 5
    for (int i = 1; i <= 10; i++)
    {
        printf("5*%d = %d\n", i, 5*i);
    }
    
    return 0;
}