// ========================= ASSIGNMENT - 17 =========================

// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int cal_power_of_given_num(int num, int power);

int main()
{
    // Declare variables
    int num, power, result;

    // Taking input from user
    printf("Enter a number and power(2, 3): ");
    scanf("%d %d", &num, &power);

    if (num > 0 && power >= 0)
    {
        // Storing result
        result = cal_power_of_given_num(num, power);

        // Displaying result
        printf("(%d)^%d == %d", num, power, result);
    }
    else
    {
        printf("Enter a positive number and power");
    }

    return 0;
}

// Calculating power of a given number
int cal_power_of_given_num(int num, int power)
{
    if (power == 0)
        return 1;

    return cal_power_of_given_num(num, power - 1) * num;
}