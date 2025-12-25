// ======================= ASSIGNMENT - 1 ========================

// Write a program to calculate area of a rectangle. Input appropriate data from the user.

/*
Program: Find area of rectangle.
Description: Takes a two integers from the user (length, breadth) and print the area of rectangle.

Input : Take two integers from user.
Processing : Calculate area of rectangle.
Output : Area of rectangle.
*/

#include <stdio.h>

int main () {
    int length, breadth, area;

    // Take input from user
    printf("Enter a value of length and breadth: ");
    scanf("%d %d", &length, &breadth);

    // Calculating area of rectangle
    area = length * breadth;

    // Display the result
    printf("Area of Rectangle is %d", area);

    return 0;
}