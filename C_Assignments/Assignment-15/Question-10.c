// ======================== ASSIGNMENT - 15 =========================

// Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5...n!/n. (TSRS)

#include <stdio.h>
int sum_of_N(int);
int factorial(int);

int main () {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sum_of_N(num);
    printf("Sum of first %d term of the series is %d", num, result);
    return 0;
}

int sum_of_N(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + (factorial(i) / i);
    }
    return sum;
}

int factorial(int num) {
    int fact = 1;
    while (num)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}