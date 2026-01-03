    // ============================ ASSIGNMENT - 6 =============================

// Write a program to check whether a given number is divisible by 3 and divisible by 2.

/*
Program Title : Check Divisibility by 2 and 3

Description :
This program takes an integer as input from the user and checks whether the 
number is divisible by both 2 and 3. It then displays the appropriate message 
based on the result.

Input :
- An integer number from the user

Processing :
- Check if the number is divisible by 2 (number % 2 == 0)
- Check if the number is divisible by 3 (number % 3 == 0)
- If both conditions are true, the number is divisible by 2 and 3
- Otherwise, it is not divisible by both

Output :
- Display "Given number is divisible by 2 and 3" if divisible
- Display "Given number is not divisible by 2 and 3" if not divisible
*/

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking given number is divisible by 2 and 3
    if (number % 2 == 0 && number % 3 == 0)
    {
        printf("Given number is divisible by 2 and 3");
    }
    else
    {
        printf("Given number is not divisible by 2 and 3");
    }

    return 0;
}