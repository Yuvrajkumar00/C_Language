// ============================== ASSIGNMENT - 10 ===============================

// Write a program to calculate HCF of two numbers.

#include <stdio.h>

int main () {
    int num1, num2, hcf=1;

    // Take data from the user
    printf("Enter a two number: ");
    scanf("%d %d", &num1, &num2);

    // Finding HCF of two numbers
    if (num1 == 0 && num2 == 0)
    {
        printf("HCF of 0 and 0 is NOT DEFINED");

    } else if (num1 < 0 || num2 < 0)
    {
        printf("Invalid Numbers");
        
    } else if (num1 == 0 || num2 == 0)
    {
        hcf = num1 > num2 ? num1 : num2;
        printf("HCF of %d and %d is\n%d", num1, num2, hcf);
    }
    else
    {
        for (int i = 1; i <= (num1 > num2 ? num2 : num1); i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                if (hcf < i)
                {
                    hcf = i;
                }
            }
        }

        // Display the data
        printf("HCF of %d and %d is\n%d", num1, num2, hcf);
    }

    return 0;
}