// ======================== ASSIGNMENT - 15 =========================

// Write a function to print first N terms of Fibonacci series. (TSRN)

#include <stdio.h>
void print_fibonacci(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_fibonacci(num);
    return 0;
}

void print_fibonacci(int num) {
    int num1 = -1, num2 = 1, fibonacci;
    for (int i = 1; i <= num; i++)
    {
        fibonacci = num1 + num2;
        printf("%d ", fibonacci);
        num1 = num2;
        num2 = fibonacci;
    }
}