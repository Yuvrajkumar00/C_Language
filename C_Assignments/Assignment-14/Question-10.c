// =========================== ASSIGNMENT - 14 =============================

// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result shouldbe 2,2,3,3. (TSRN) 

#include <stdio.h>
void prime_factor(int);

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime_factor(n);
    return 0;
}

void prime_factor(int n) {
    int i=2;
    printf("Prime factor is\n");
    while (n > 1)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
        i++;
    }
}