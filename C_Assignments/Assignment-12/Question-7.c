// ============================ ASSIGNMENT - 12 ===========================

/*
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/

#include <stdio.h>

int main()
{
    int k,l;
    for (int i = 1; i <= 5; i++)
    {
        k=1;
        l=1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6-i && j <= 4+i)
            {
                if (k)
                {
                    printf("%d", l);
                    j<5 ? l++ : l--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                        l--;
                }
                k=1-k;
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