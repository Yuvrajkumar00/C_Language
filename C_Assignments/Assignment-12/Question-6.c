// ============================ ASSIGNMENT - 12 ===========================

/*
ABCDCBA
 ABCBA
  ABA
   A
*/

#include <stdio.h>

int main () {
    int k;
    for (int i = 1; i <= 4; i++)
    {
        k=65;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8-i)
            {
                printf("%c", k);
                j<4 ? k++ : k--;
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