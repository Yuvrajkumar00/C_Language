// =========================== ASSIGNMENT - 14 =============================

// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int cal_num_of_permutation(int, int);
int factorial(int);

int main () {
    int n, r, permutation;
    printf("Enter a two numbers: ");
    scanf("%d %d", &n, &r);
    permutation = cal_num_of_permutation(n, r);
    printf("Number of permutation is %d", permutation);
    return 0;
}

int cal_num_of_permutation(int n, int r) {
    int result;
    result = factorial(n) / factorial(n-r);
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