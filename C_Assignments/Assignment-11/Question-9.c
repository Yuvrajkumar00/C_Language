// ============================= ASSIGNMENT - 11 ==============================

/*
ABCDE
 BCDE
  CDE
   DE
    E
*/

#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i <= 5; i++)
    {
        n=64;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                // printf("%c", 65+j-1);
                // printf("%c", n+j);
                printf("%c", 64+j);
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