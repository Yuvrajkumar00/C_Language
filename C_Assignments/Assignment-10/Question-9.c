// ============================== ASSIGNMENT - 10 ===============================

// Write a program to check whether a given number is an Armstrong number or not.

#include <stdio.h>

int main () {
    int number, localNum, digitOfNum=0, lastdigit, sum=0;

    // Take data from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    localNum = number;
    
    // Count digit of a number
    while (localNum > 0)
    {
        localNum = localNum / 10;
        digitOfNum++;
    }
    
    localNum = number;
    
    // Extracting digits and raising to power
    while (localNum > 0)
    {
        int power = 1;
        lastdigit = localNum % 10;
        for (int i = 1; i <= digitOfNum; i++)
        {
            power = power * lastdigit;
        }
        // sum of the result
        sum = sum + power;
        localNum = localNum / 10;
        
    }

    // compare sum is equal to original
    if (number == sum)
    {
        printf("Given number is Armstrong number");
    }
    else
    {
        printf("Given number is NOT a Armstrong number");
    }

    return 0;
}