// =========================== ASSIGNMENT - 14 =============================

// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int cal_num_of_combination(int, int);
int factorial(int);

int main () {
    int n, r, combination;
    printf("Enter a two numbers: ");
    scanf("%d %d", &n, &r);
    combination = cal_num_of_combination(n, r);
    printf("Number of combination is %d", combination);
    return 0;
}

int cal_num_of_combination(int n, int r) {
    int result;
    result = factorial(n) / (factorial(r)*factorial(n-r));
    return result;
}

int factorial(int num) {
    int fact=1;
    while (num)
    {
        fact = fact*num;
        num--;
    }
    return fact;
}