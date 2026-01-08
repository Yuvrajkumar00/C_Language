// ============================= ASSIGNMENT - 11 ==============================

/*
ABCDE
 ABCD
  ABC
   AB
    A
*/

#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i <= 5; i++)
    {
        n=65;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                // printf("%c", 65+j-i);
                printf("%c", n++);
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