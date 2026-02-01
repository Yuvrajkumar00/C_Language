// ========================= ASSIGNMENT - 17 =========================

// Write a recursive function to calculate HCF of two numbers.

// #include <stdio.h>
// int find_HCF(int, int, int);

// int main () {
//     int num1, num2, num3, result;
//     printf("Enter a number: ");
//     scanf("%d %d", &num1, &num2);
//     num3 = num1>num2?num2:num1;
//     result = find_HCF(num1, num2, num3);
//     printf("HCF of %d and %d is %d", num1, num2, result);
//     return 0;
// }

// THIS IS FIRST WAY

// int find_HCF(int num1, int num2, int num3) {
//     if (num3 == 1)
//         return 1;
//     if (num1 % num3 == 0 && num2 % num3 == 0)
//         return num3;
//     return find_HCF(num1, num2, num3-1);
// }

// THIS IS SECOND WAY

#include <stdio.h>
int find_HCF(int, int);

int main () {
    int num1, num2, result;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    result = find_HCF(num1, num2);
    printf("HCF of %d and %d is %d", num1, num2, result);
    return 0;
}

int find_HCF(int num1, int num2) {
    int greaterNum = num1 > num2 ? num1 : num2;
    int smallerNum = num1 < num2 ? num1 : num2;
    int remainder = greaterNum % smallerNum;
    if (remainder == 0)
    {
        return smallerNum;
    }
    greaterNum = smallerNum;
    smallerNum = remainder;
    return find_HCF(greaterNum, smallerNum);
}