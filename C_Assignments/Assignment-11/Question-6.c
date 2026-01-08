// ============================= ASSIGNMENT - 11 ==============================

/*
1
21
321
4321
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                printf("%d", i+1-j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}