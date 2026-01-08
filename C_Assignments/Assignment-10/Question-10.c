// ============================== ASSIGNMENT - 10 ===============================

// Write a program to print all Armstrong numbers under 1000.

#include <stdio.h>

int main () {
    for (int i = 0; i < 1000; i++)
    {
        int number=i, digitOfNum=0, power, lastdigit, sum=0;

        if (number == 0)
        {
            printf("%d\n", i);
            continue;
        }
        
        while (number > 0)
        {
            number = number / 10;
            digitOfNum++;
        }

        number = i;

        // Extracting digits and raising to power
        while (number > 0)
        {
            power = 1;
            lastdigit = number % 10;
            for (int i = 1; i <= digitOfNum; i++)
            {
                power = power * lastdigit;
            }
            // Sum of the result
            sum = sum + power;
            number = number / 10;
        }
        
        // compare sum is equal to original
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}