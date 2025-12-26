// ========================== ASSIGNMENT - 2 ============================

// Write a program to calculate circumference of a circle.

/*
Program: Find circumference of a circle.
Description: Takes radius of a circle from the user and prints its circumference.

Input      : Take one integer from the user.
Processing : calculate circumference.
Output     : print circumference.
*/

#include <stdio.h>

int main () {
    int radius;
    float circumference;

    // Take data from user
    printf("Enter a radius of circle: ");
    scanf("%d", &radius);

    // Calculating circumference
    circumference = 2 * 3.14 * radius;

    // Display the data
    printf("Circumference of circle is %.2f", circumference);

    return 0;
}