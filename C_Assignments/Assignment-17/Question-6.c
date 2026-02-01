// ========================= ASSIGNMENT - 17 =========================

// Write a recursive function to calculate factorial of a given number.

#include <stdio.h>
int find_factorial(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = find_factorial(num);
    printf("Factorial of a given number %d is %d", num, result);
    return 0;
}

int find_factorial(int num) {
    if (num == 0)
        return 1;
    return find_factorial(num-1) * num;
}
