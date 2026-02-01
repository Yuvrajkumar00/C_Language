// ========================= ASSIGNMENT - 17 =========================

// Write a program in C to count the digits of a given number using recursion."

#include <stdio.h>
int count_digit(int num);

int main () {
    int num, digitCount;
    printf("Enter a number: ");
    scanf("%d", &num);
    digitCount = count_digit(num);
    printf("%d digits of a given number", digitCount);
    return 0;
}

int count_digit(int num) {
    if (num >= 0 && num <= 9)
    {
        return 1;
    }
    return count_digit(num / 10) + 1;
}