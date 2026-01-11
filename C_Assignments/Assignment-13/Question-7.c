// ============================== ASSIGNMENT - 13 ===============================

/* Write a menu driven program with  the following options:
    1. Factorial of a number
    2. Check Even and Odd
    3. Area of Circle
    4. Sum of first N natural numbers
    5. Exit
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int option, num;
    while (1)
    {
        printf("\n1. Factorial of a number");
        printf("\n2. Check Even and Odd");
        printf("\n3. Area of Circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit");
        printf("\nChoose your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            int factorial=1;
            while (num > 0)
            {
                factorial = factorial*num;
                num--;
            }
            printf("Factorial is %d", factorial);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("Even number");
            }
            else
            {
                printf("Odd number");
            }
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Area of circle is %.2f", 3.14*num*num);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            int sum=0;
            for (int i = 1; i <= num; i++)
            {
                sum = sum+i;
            }
            printf("Sum of first %d natural number is %d", num, sum);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid number");
        }
    }
    
    return 0;
}