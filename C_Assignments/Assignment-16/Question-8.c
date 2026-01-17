// ========================= ASSIGNMENT - 16 ========================

// Write a recursive function to print binary of a given decimal number.

#include <stdio.h>
void print_binary(int c, float b);
void int_binary(int c);
void float_binary(float b, int n);

int main () {
    float a, b;
    int c;
    printf("Enter a decimal number: ");
    scanf("%f", &a);
    c = a;
    b = a-c;
    print_binary(c, b);

    return 0;
}

void print_binary(int c, float b) {
    int n=8;
    int_binary(c);
    printf(".");
    float_binary(b, n);
}

void int_binary(int c) {
    if (c > 0)
    {
        int t = c % 2;
        c = c / 2;
        int_binary(c);
        printf("%d", t);
    }
}

void float_binary(float b, int n) {
    if (n > 0)
    {
        int j = b * 2;
        printf("%d", j);
        b = (b*2) - j;
        n--;
        float_binary(b, n);
    }   
}