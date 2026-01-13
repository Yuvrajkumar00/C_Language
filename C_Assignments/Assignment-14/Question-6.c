// =========================== ASSIGNMENT - 14 =============================

// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>
int factorial(int);

int main () {
    int num, factorialRes=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorialRes = factorial(num);
    printf("Factorial of %d is %d", num, factorialRes);
    return 0;
}

int factorial(int num) {
    int factorialRes2  = 1;
    while (num > 0)
    {
        factorialRes2 = factorialRes2 * num;
        num--;
    }
    return factorialRes2;
}