// ============================== ASSIGNMENT - 13 ===============================

/*
Write a menu driven program with the following options:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option, num1, num2;

    while (1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nChoose your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\n\nEnter a two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Addition is %d\n", num1 + num2);
            break;
        case 2:
            printf("\n\nEnter a two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Subtraction is %d\n", num1 - num2);
            break;
        case 3:
            printf("\n\nEnter a two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Multiplication is %d\n", num1 * num2);
            break;
        case 4:
            printf("\n\nEnter a two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Division is %d\n", num1 / num2);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid Number");
        }

    }

    return 0;
}