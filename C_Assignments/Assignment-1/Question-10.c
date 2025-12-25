// ======================= ASSIGNMENT - 1 ========================

// Write a program to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

// Expected output format -- "Area of circle is A having the radius R". Replace A with area & R with radius.

/*
Program: Find area of circle.
Description: Take radius from the user and print the area of circle.

Input : Take one integer value from user.
Processing : Find area of circle.
Output : area of circle.
*/

#include <stdio.h>

int main () {
    int radius;
    float area;

    // Take data from user
    printf("Enter a radius of circle: ");
    scanf("%d", &radius);

    // Calculating area of circle
    area = 3.14 * radius * radius;

    // Display the result
    printf("Area of circle is %.2f having the radius %d", area, radius);

    return 0;
}