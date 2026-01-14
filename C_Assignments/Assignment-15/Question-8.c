// ======================== ASSIGNMENT - 15 =========================

//

#include <stdio.h>
void print_pascal_triangle(int);
int factorial(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_pascal_triangle(num);
    return 0;
}

void print_pascal_triangle(int num)
{
    for (int i = 1; i <= num + 1; i++)
    {
        int combination;
        for (int k = 1; k <= i; k++)
        {
            combination = factorial(i - 1) / (factorial(k - 1) * factorial(i - k));
            printf("%d", combination);
        }
        printf("\n");
    }
}

int factorial(int num)
{
    int fact = 1;
    while (num)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}