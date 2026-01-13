// =========================== ASSIGNMENT - 14 =============================

// Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float calAreaOfCircle(float);

int main () {
    float radius, area;
    printf("Enter a radius of circle: ");
    scanf("%f", &radius);
    area = calAreaOfCircle(radius);
    printf("Area of a circle is %.2f", area);
    return 0;
}

float calAreaOfCircle(float radius) {
    return 3.14*radius*radius;
}