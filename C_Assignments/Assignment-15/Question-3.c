// ======================== ASSIGNMENT - 15 =========================

// Write a function to check whether a given number is prime or not. (TSRS)

#include <stdio.h>
int check_prime_num(int);

int main()
{
    int num, is_prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    is_prime = check_prime_num(num);
    if (is_prime)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    return 0;
}

int check_prime_num(int num)
{
    if (num == 2)
        return 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}