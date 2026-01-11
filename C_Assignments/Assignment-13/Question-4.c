// ============================== ASSIGNMENT - 13 ===============================

/*
Write a menu driven program with the following options:
    1. Check whether a given set of three numbers are lenghts of an isosceles triangle or not.
    2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.
    3. Check whether a given set of three numbers are equilateral triangle or not.
    4. Exit
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int option, num1, num2, num3;

    while (1)
    {
        printf("\n1. Check whether a given set of three numbers are lenghts of an isosceles triangle or not.");
        printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.");
        printf("\n3. Check whether a given set of three numbers are equilateral triangle or not.");
        printf("\n4. Exit");
        printf("\nChoose your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nEnter a three number: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            if (num1+num2 > num3 &&
                num1+num3 > num2 &&
                num2+num3 > num1
            )
            {
                if (num1==num2 || num1==num3 || num2==num3)
                {
                    printf("It is Isosceles Triangle\n");
                }
                else
                {
                    printf("It is NOT an Isosceles Triangle\n");
                }
            }
            else
            {
                printf("Triangle in NOT valid\n");
            }
            
            break;
        case 2:
            printf("\nEnter a three number: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            if (num1+num2 > num3 &&
                num1+num3 > num2 &&
                num2+num3 > num1
            )
            {
                if ((num1*num1)+(num2*num2)==(num3*num3) || 
                    (num1*num1)+(num3*num3)==(num2*num2) || 
                    (num2*num2)+(num3*num3)==(num1*num1))
                {
                    printf("It is Right-angled Triangle\n");
                }
                else
                {
                    printf("It is NOT an Right-angled Triangle\n");
                }
            }
            else
            {
                printf("Triangle in NOT valid\n");
            }
            
            break;
        case 3:
            printf("\nEnter a three number: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            if (num1+num2 > num3 &&
                num1+num3 > num2 &&
                num2+num3 > num1
            )
            {
                if (num1==num2 && num2==num3)
                {
                    printf("It is Equilateral Triangle\n");
                }
                else
                {
                    printf("It is NOT an Equilateral Triangle\n");
                }
            }
            else
            {
                printf("Triangle in NOT valid\n");
            }
            
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Option\n");
        }
    }
    
    return 0;
}