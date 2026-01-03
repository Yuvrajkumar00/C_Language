// ============================ ASSIGNMENT - 6 =============================

// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

/*
Program Title : Check Triangle Validity

Description :
This program accepts the lengths of three sides of a triangle from the user.
It first ensures that all sides are positive numbers. Then it checks the
triangle inequality theorem (sum of any two sides > third side) to determine
whether the triangle is valid or not. It displays the result accordingly.

Input :
- Lengths of the three sides of a triangle (len1, len2, len3)

Processing :
- Check if all lengths are positive
- Apply the triangle inequality theorem:
    len1 + len2 > len3
    len1 + len3 > len2
    len2 + len3 > len1
- If all conditions are true, the triangle is valid
- Otherwise, the triangle is not valid

Output :
- Display "Triangle is valid" if conditions are met
- Display "Triangle is not valid" if conditions are not met
- Display "Enter a positive length" if any input is non-positive
*/

#include <stdio.h>

int main () {
    int len1, len2, len3;

    // Take data from the user
    printf("Enter a length of the triangle: ");
    scanf("%d %d %d", &len1, &len2, &len3);

    // Checking triangle is valid or not
    if (len1 <= 0 || len2 <= 0 || len3 <= 0)
    {
        printf("Enter a positive length");

    } else if(len1 + len2 > len3 && 
            len1 + len3 > len2 && 
            len2 + len3 > len1)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}