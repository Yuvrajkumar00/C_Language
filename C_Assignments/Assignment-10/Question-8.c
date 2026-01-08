// ============================== ASSIGNMENT - 10 ===============================

// Write a program to find next Prime number of a given number

#include <stdio.h>

int main () {
    int number;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding next prime number of a given number
    if (number < 0)
    {
        printf("Invalid Number");
    }
    else
    {
        for (int i = number + 1; ; i++)
        {
            int j;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                
            }
            if (j == i)
            {
                printf("Next Prime number of %d is\n%d", number, i);
                break;
            }
        }
    }
    
    return 0;
}