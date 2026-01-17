// ======================== ASSIGNMENT - 16 =========================

// Write a recursive function to print first N odd natural numbers.

#include <stdio.h>
void print_odd_N_natural_num(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_odd_N_natural_num(num);
    return 0;
}

void print_odd_N_natural_num(int num) {
    if (num > 0)
    {
        print_odd_N_natural_num(num-1);
        printf("%d\n", 2*num-1);
    }
}