// =========================== ASSIGNMENT - 14 =============================

// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int calEvenOdd(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = calEvenOdd(num);
    if (result)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}

int calEvenOdd(int num) {
    if (num % 2)
        return 0;
    else
        return 1;
}