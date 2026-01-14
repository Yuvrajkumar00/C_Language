// ======================== ASSIGNMENT - 15 =========================

// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int find_next_prime(int);
int prime(int);

int main()
{
    int num, nextPrime;
    printf("Enter a number: ");
    scanf("%d", &num);
    nextPrime = find_next_prime(num);
    printf("Next prime number %d", nextPrime);
    return 0;
}

int find_next_prime(int num)
{
    while (!prime(++num));
    return num;
}

int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 0;
}