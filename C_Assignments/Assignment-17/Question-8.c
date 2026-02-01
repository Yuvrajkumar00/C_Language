// ========================= ASSIGNMENT - 17 =========================

// Write a recursive funtion to print first N terms of Fibonacci series.

#include <stdio.h>
void fibonacci(int, int, int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fibonacci(num, -1, 1);
    return 0;
}

void fibonacci(int num, int a, int b) {
    if (num > 0)
    {
        int fib = a + b;
        printf("%d ", fib);
        a = b;
        b = fib;
        fibonacci(num - 1, a, b);
    }
    
}