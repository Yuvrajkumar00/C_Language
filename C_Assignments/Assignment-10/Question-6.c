// ============================== ASSIGNMENT - 10 ===============================

// Write a program to print all Prime numbers under 100.

#include <stdio.h>

int main () {
    // Printing all prime number under 100
    printf("All Prime number under 100 is:\n");
    for (int i = 2; i < 100; i++)
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
    
    return 0;
}