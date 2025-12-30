// ============================= ASSIGNMENT - 5 =============================

// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

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