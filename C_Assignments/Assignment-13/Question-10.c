// ============================== ASSIGNMENT - 13 ===============================

/*
Write a menu driven program with the folloeing options:
    1. Calculate LCM of two numbers
    2. Calculate sum of the digits of a number
    3. volume of a cuboid
    4. Check whether a given number is a Prime or not
    5. Exit
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int option;
    while (1)
    {
        printf("\n1. Calculate LCM of two numbers");
        printf("\n2. Calculate sum of the digits of a number");
        printf("\n3. volume of a cuboid");
        printf("\n4. Check whether a given number is a Prime or not");
        printf("\n5: Exit");
        printf("\nChoose your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1: {
            int num1, num2, i;
            printf("Enter a two numbers: ");
            scanf("%d %d", &num1, &num2);
            i= num1 > num2 ? num1 : num2;
            while (1)
            {
                if (i % num1 == 0 && i % num2 == 0)
                {
                    printf("LCM of %d and %d is %d", num1, num2, i);
                    break;
                }
                i++;
            }
            break;}
        case 2: {
            int num, sum=0;
            printf("Enter a numbers: ");
            scanf("%d", &num);
            while (num > 0)
            {
                sum = sum + (num%10);
                num = num /10;
            }
            printf("Sum of digit is %d", sum);
            break;}
        case 3: {
            int l, b, h;
            printf("Enter a len, breadth and height: ");
            scanf("%d %d %d", &l, &b, &h);
            printf("Volume of a cuboid is %d", l*b*h);
            break;}
        case 4: {
            int num;
            printf("Enter a numbers: ");
            scanf("%d", &num);
            if (num == 2)
            {
                printf("It is a Prime number");
            }
            else
            {
                int i;
                for(i=2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        break;
                    }
                }
                if (i == num)
                {
                    printf("It is a Prime number");
                }
                else
                {
                    printf("It is NOT a Prime number");
                }
            }
            break;}
        case 5:
            exit(0);
        default:
            printf("Invalid number");
        }
    }
    
    return 0;
}