// ======================== ASSIGNMENT - 15 =========================

// Write a function to print first N prime numbers. (TSRN)

#include <stdio.h>
void print_prime_num(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_prime_num(num);
    return 0;
}

void print_prime_num(int num) {
    int count=0, prime=2;

    while (!(count == num))
    {
        int i;
        for (i = 2; i < prime; i++)
        {
            if(prime % i == 0)
                break;
        }
        if(i == prime) {
            printf("%d ", prime);
            count++;
        }

        prime++;
    }
}