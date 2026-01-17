// ======================== ASSIGNMENT - 16 =========================

// Write a recursive function to print first N natural numbers in reverse order.

#include <stdio.h>
void print_N_natural_num_reverse(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_N_natural_num_reverse(num);
    return 0;
}

void print_N_natural_num_reverse(int num) {
    if (num > 0)
    {
        printf("%d\n", num);
        print_N_natural_num_reverse(num-1);
    }
}