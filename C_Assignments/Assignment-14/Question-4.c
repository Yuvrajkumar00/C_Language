// =========================== ASSIGNMENT - 14 =============================

// Write a function to print first N natural numbers. (TSRN)

#include <stdio.h>
void printNaturalNum(int);

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printNaturalNum(num);
    return 0;
}

void printNaturalNum(int num) {
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}