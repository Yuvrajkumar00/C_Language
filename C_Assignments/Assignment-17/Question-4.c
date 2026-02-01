// ========================= ASSIGNMENT - 17 =========================

// Write a recursive function to calculate sum of squares of first N natural numbers.

#include <stdio.h>
int sum_of_squares_of_natural(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sum_of_squares_of_natural(num);
    printf("Sum of squares of first %d natural numbers is %d", num, result);
    return 0;
}

int sum_of_squares_of_natural(int num) {
    if (num == 1)
    {
        return 1;
    }
    return sum_of_squares_of_natural(num-1) + num*num;
}
