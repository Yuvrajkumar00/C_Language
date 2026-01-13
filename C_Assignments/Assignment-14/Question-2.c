// =========================== ASSIGNMENT - 14 =============================

// Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
float calSimpleInterest(float, float, float);

int main () {
    float p, r, t, si;
    printf("Enter a price, interest rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = calSimpleInterest(p, r, t);
    printf("Simple Interest is %.2f", si);
    return 0;
}

float calSimpleInterest(float p, float r, float t) {
    float si = (p*r*t)/100;
    return si;
}