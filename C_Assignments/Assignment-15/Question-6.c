// ======================== ASSIGNMENT - 15 =========================

// Write a function to print all prime numbers between two given numbers. (TSRN)

#include <stdio.h>
void print_prime_num(int, int);
int prime(int);

int main () {
    int num1, num2;
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);
    print_prime_num(num1, num2);
    return 0;
}

void print_prime_num(int num1, int num2) {
    for (int i = num1+1; i < num2; i++)
    {
        if(prime(i))
            printf("%d ", i);
    }
}

int prime(int num) {
    int i;
    for (i = 2; i < num; i++)
    {
        if(num % i == 0)
            break;
    }
    if(i == num) 
        return 1;
    else
        return 0;
}