// =========================== ASSIGNMENT - 14 =============================

// Write a funtion to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>
int check_given_number(int, int);

int main () {
    int num, digit, is_present;
    printf("Enter a one number and a digit: ");
    scanf("%d %d", &num, &digit);
    is_present = check_given_number(num, digit);
    if (is_present)
        printf("Yes, given number contains a given digit");
    else
        printf("No, given number does not contains a given digit");
    return 0;
}

int check_given_number(int num, int digit) {
    while (num)
    {
        if (num % 10 == digit)
            return 1;
        num = num / 10;
    }
    return 0;
}