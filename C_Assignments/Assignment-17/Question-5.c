// ========================= ASSIGNMENT - 17 =========================

// Write a recursive function to calculate sum of digits of a given number.

#include <stdio.h>
int sum_of_digits(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sum_of_digits(num);
    printf("Sum of a given digits is %d", result);
    return 0;
}

int sum_of_digits(int num) {
    if (num == 0)
        return 0;
    return sum_of_digits(num/10) + (num%10);
}