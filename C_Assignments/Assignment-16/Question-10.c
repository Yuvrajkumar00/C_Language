// ========================= ASSIGNMENT - 16 ========================

// Write a recursive function to print reverse of a given number.

#include <stdio.h>
void print_reverse_num(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_reverse_num(num);
    return 0;
}

void print_reverse_num(int num) {
    if (num > 0)
    {
        printf("%d", num%10);
        print_reverse_num(num/10);
    }
    
}