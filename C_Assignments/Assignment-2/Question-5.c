// ========================== ASSIGNMENT - 2 ============================

// Write a program to ask user about the cost price and selling price of banana per dozen. Calculate the profit earned upon selling 25 bananas.

/*
Program: Find profit.
Description: Take cost and selling price of 12 bananas from the user and prints the profit on 25 bananas.

Input      : Take cost and selling price of 12 bananas from the user.
Processing : calculate profit on 25 bananas.
Output     : print profit value.
*/

#include <stdio.h>

int main () {
    int costPrice, sellingPrice;
    float profit;

    // Take data from user
    printf("Enter a cost and selling price of 12 bananas: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    // Calculating profit
    profit = (sellingPrice - costPrice) * 25 / 12.0;

    // Display the result
    printf("Profit on selling of 25 bananas is %.2f", profit);

    return 0;
}