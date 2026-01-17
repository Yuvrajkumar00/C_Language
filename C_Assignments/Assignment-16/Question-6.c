// ======================== ASSIGNMENT - 16 =========================

// Write a recursive function to print first N even natural numbers in reverse order.

#include <stdio.h>
void print_even_N_natural_num_reverse(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_even_N_natural_num_reverse(num);
    return 0;
}

void print_even_N_natural_num_reverse(int num) {
    if (num > 0)
    {
        printf("%d\n", 2*num);
        print_even_N_natural_num_reverse(num-1);
    }
}