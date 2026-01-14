// ======================== ASSIGNMENT - 15 =========================

// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int find_HCF(int, int);

int main () {
    int num1, num2, HCF;
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);
    HCF = find_HCF(num1, num2);
    printf("HCF of %d and %d is %d", num1, num2, HCF);
    return 0;
}

int find_HCF(int num1, int num2) {
    int hcf;
    for (int i=1; i <= (num1 > num2 ? num2 : num1); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    return hcf;
}