// ============================== ASSIGNMENT - 10 ===============================

// Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>

int main () {
    int number, first=-1, second=1, fibonacci;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking given number is present in fibonacci series or not
    if (number >= 0)
    {
        while (1)
        {
            fibonacci = first + second;
            first = second;
            second = fibonacci;

            if (fibonacci == number)
            {
                printf("Given number is present in fibonacci series");
                break;
            }
            else
            {
                if (fibonacci > number)
                {
                    printf("Given number is NOT present in fibonacci series");
                    break;
                }
                
            }
        }
        
    }
    else
    {
        printf("Invalid Number");
    }
    
    return 0;
}