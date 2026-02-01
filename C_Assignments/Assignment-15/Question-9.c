// ======================== ASSIGNMENT - 15 =========================

// Write a function to  print all Armstrong numbers between two given numbers. (TSRN)

#include <stdio.h>
void print_Armstrong(int, int);
int count_digit(int);
int find_power(int, int);
int find_sum_of_power(int, int);

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    print_Armstrong(num1, num2);
    return 0;
}

void print_Armstrong(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        // Storing digit count of number
        int digitCount = count_digit(i);

        // Finding sum of power of all digit
        int sum = find_sum_of_power(i, digitCount);

        // Checking number is Armstrong
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}

// Finding digit count of number
int count_digit(int num)
{
    int count = 0;
    while (num)
    {
        num = num / 10;
        count++;
    }

    return count;
}

// Finding sum of power of all digit
int find_sum_of_power(int num, int digitCount)
{
    int sum = 0, lastdigit, power;
    while (num)
    {
        // Finding last digit
        lastdigit = num % 10;

        // Finding power of lastdigit
        power = find_power(digitCount, lastdigit);

        // Adding sum of power
        sum = sum + power;
        num = num / 10;
    }

    return sum;
}

// Finding power of lastdigit
int find_power(int digitCount, int lastdigit)
{
    int power = 1;
    for (int j = 1; j <= digitCount; j++)
    {
        power = power * lastdigit;
    }

    return power;
}