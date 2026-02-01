// ========================= ASSIGNMENT - 16 ========================

// Write a recursive function to print octal of a given decimal number.

#include <stdio.h>
void print_octal(float);
void int_octal(int int_num);
void float_octal(float float_num, int n);

int main () {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    print_octal(num);
    return 0;
}

void print_octal(float num) {
    int int_num = num;
    int_octal(int_num);
    printf(".");
    float float_num = num - int_num;
    int n = 8;
    float_octal(float_num, n);
}

void int_octal(int int_num) {
    if (int_num > 0)
    {
        int_octal(int_num / 8);
        printf("%d", int_num % 8);
    }
}

void float_octal(float float_num, int n) {
    int a = float_num *8;
    if (n > 0)
    {
        printf("%d", a);
        n--;
        float_octal((float_num *8) - a, n);
    }
}