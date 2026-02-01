// ========================= ASSIGNMENT - 17 =========================

// Write a recursive function to calculate sum of first N odd natural numbers.

#include <stdio.h>
int sum_of_odd_natural(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sum_of_odd_natural(num);
    printf("Sum of first %d odd natural numbers is %d", num, result);
    return 0;
}

int sum_of_odd_natural(int num) {
    if (num == 1)
        return 1;
    return sum_of_odd_natural(num-1) + 2*num-1;
}