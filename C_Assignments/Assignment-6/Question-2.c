// ============================ ASSIGNMENT - 6 =============================

// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

/*
Program Title : Calculate Profit or Loss Percentage

Description :
This program accepts the cost price and selling price of a product from
the user. It calculates and displays the profit percentage if the selling
price is greater than the cost price, or the loss percentage if the selling
price is less than the cost price. If both prices are equal, it displays
that there is no profit or loss.

Input :
- Cost price of the product
- Selling price of the product

Processing :
- Check if cost price is valid (greater than 0)
- If selling price > cost price, calculate profit percentage
- If selling price < cost price, calculate loss percentage
- If both prices are equal, no profit or loss

Output :
- Display profit percentage or loss percentage
- Or display appropriate message if no profit/loss or invalid input
*/

#include <stdio.h>

int main () {
    float costPrice, sellingPrice, percentage;

    // Take data from the user
    printf("Enter a costPrice and sellingPrice of a product: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Calculating profit and loss percentage
    if (costPrice <= 0)
    {
        printf("Invalid cost price");
    }
    else if (sellingPrice > costPrice)
    {
        percentage = (sellingPrice - costPrice) / costPrice * 100;
        printf("Profit percentage is %.2f%%", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        percentage = (costPrice - sellingPrice) / costPrice * 100;
        printf("Loss percentage is %.2f%%", percentage);
    }
    else
    {
        printf("Cost and Selling price both are equal, so there is no profit or loss");
    }

    return 0;
}