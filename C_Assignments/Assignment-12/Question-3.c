// ============================ ASSIGNMENT - 12 ===========================

/*
    *
   * *
  * * *
 * * * *
 */

#include <stdio.h>

// This is first way

int main () {
    int k;
    
    for (int i = 1; i <= 4; i++)
    {
        k=1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5-i && j <= 3+i)
            {
                if (k)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}


// // This is second way

// int main () {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j >= 5-i && j <= 3+i)
//             {
//                 if (i==1 || i==3)
//                 {
//                     if (j==3 || j==5)
//                         printf(" ");
//                     else
//                         printf("*");
//                 }
//                 if (i==2 || i==4)
//                 {
//                     if (j==2 || j==4 || j==6)
//                         printf(" ");
//                     else
//                         printf("*");
//                 }
//             }    
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// This is third way

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 7; j++)
//         {
//             if (i == 1)
//             {
//                 if (j == 4)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             else if (i == 2)
//             {
//                 if (j == 3 || j == 5)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             else if (i == 3)
//             {
//                 if (j == 2 || j == 4 || j == 6)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             else
//             {
//                 if (j == 1 || j == 3 || j == 5 || j == 7)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }