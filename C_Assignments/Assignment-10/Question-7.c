// ============================== ASSIGNMENT - 10 ===============================

// Write a program to print all Prime numbers between two given numbers.

#include <stdio.h>

int main () {
    int firstNum, lastNum;

    // Take data from the user
    printf("Enter a two numbers: ");
    scanf("%d %d", &firstNum, &lastNum);

    // Printing prime numbers between two given numbers
    if (firstNum < 0 || lastNum < 0)
    {
        printf("Invalid Number");
    }
    else if (lastNum < firstNum)
    {
        printf("First number should not be greater than last number");
    }
    else
    {
        printf("All Prime numbers between %d and %d is:\n", firstNum, lastNum);
        for (int i = (firstNum < 2 ? 2 : firstNum); i <= lastNum; i++)
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
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
}