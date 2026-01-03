// ============================ ASSIGNMENT - 6 =============================

// Write a program which takes the month number as an input and diplay number of days in that month.

/*
Program Title : Display Number of Days in a Month

Description :
This program accepts the month number (1-12) from the user and displays the
number of days in that month. It also validates the input to ensure the month
number is between 1 and 12. For February, it displays 28 or 29 days considering
leap years (without checking for leap year calculation).

Input :
- Month number (1 to 12)

Processing :
- Check if the month number is valid (1-12)
- If month is 1, 3, 5, 7, 8, 10, 12 → 31 days
- If month is 4, 6, 9, 11 → 30 days
- If month is 2 → 28 or 29 days
- If month number is invalid → display error

Output :
- Display the number of days in the given month
- Or display "Invalid month number" if input is out of range
*/

#include <stdio.h>

int main () {
    int month;

    // Take data from the user
    printf("Enter a month: ");
    scanf("%d", &month);

    // Printing number of days in the month
    if (month < 1 || month > 12)
    {
        printf("Invalid month number");

    } else if (month == 1 || 
            month == 3 || 
            month == 5 || 
            month == 7 || 
            month == 8 || 
            month == 10 || 
            month == 12)
    {
        printf("31 days in this month");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("30 days in this month");
    }
    else
    {
        printf("28 or 29 days in this month");
    }
    
    return 0;
}