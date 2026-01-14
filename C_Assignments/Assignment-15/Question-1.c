// ======================== ASSIGNMENT - 15 =========================

// Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int find_LCM(int, int);

int main () {
    int num1, num2, LCM;
    printf("Enter a two numbers: ");
    scanf("%d %d", &num1, &num2);
    LCM = find_LCM(num1, num2);
    printf("LCM of %d and %d is %d", num1, num2, LCM);
    return 0;
}

int find_LCM(int num1, int num2) {
    int i = num1 > num2 ? num1 : num2;
    while (i <= num1*num2)
    {
        if (i % num1 == 0 && i % num2 == 0)
            return i;
        i++;
    }
}