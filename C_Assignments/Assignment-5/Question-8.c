// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

/*
Program: Check roots of quadratic equation is real & distinct, real & equal or imaginary roots.
Description: Take three numbers from the user, find discriminant and check roots are real & distinct, real & equal or imaginary roots, and print the result.

Input      : Take three integers from the user.
Processing : Finding discriminant and then checking roots are real & distinct, real & equal, or imaginary roots.
Output     : Print the result.
*/

#include <stdio.h>

int main () {
    int a, b, c, discriminant;

    // Take data from the user
    printf("Enter a coefficient of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculating discriminant
    discriminant = (b*b) - 4*a*c;

    // Checking discriminant it is real & distinct, real & equal or imaginary.
    if (discriminant > 0)
    {
        printf("Roots are real & distinct");
    } else if (discriminant == 0) {
        printf("Roots are real and equal");
    } else {
        printf("Roots are imaginary");
    }

    return 0;
}