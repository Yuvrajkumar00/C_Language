// ============================= ASSIGNMENT - 5 =============================

// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

/*
Program: Find the greatest among three numbers.
Description: Take three numbers from the user, compare the three numbers, and print the result.

Input      : Take three integers from the user.
Processing : Comparing three integers.
Output     : Prints the number only once, even if repeated
*/


#include <stdio.h> 

int main () {
    int num1, num2, num3;

    // Take data from the user
    printf("Enter a three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Checking the greatest number among three given numbers
    if (num1 >= num2 && num1 >= num3)
    {
        printf("Greatest number is %d", num1);

    } else if (num2 >= num1 && num2 >= num3)
    {
        printf("Greatest number is %d", num2);

    } else
    {
        printf("Greatest number is %d", num3);
    }
    
    return 0;
}