// ========================== ASSIGNMENT - 2 ============================

// Write a program to calculate volume of a cuboid.

/*
Program: Find volume of a cuboid.
Description: Takes length, breadth and height from the user and prints the volume of a cuboid.

Input      : Take three integers from the user.
Processing : calculate volume of a cuboid.
Output     : print volume of a cuboid.
*/

#include <stdio.h>

int main () {
    int length, breadth, height, volume;

    // Take data from user
    printf("Enter a length, breadth and height: ");
    scanf("%d %d %d", &length, &breadth, &height);

    // Calculating volume of a cuboid
    volume = length * breadth * height;

    // Display the data
    printf("Volume of a cuboid is %d", volume);

    return 0;
}
