// ============================ ASSIGNMENT - 12 ==========================

/*
1234321
123 321
12   21
1     1
*/

#include <stdio.h>

int main () {
    int k;
    for (int i = 1; i <= 4; i++)
    {
        k=1;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5-i || j >= 3+i)
            {
                printf("%d", k);
                j<4 ? k++ : k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
    
    return 0;
}