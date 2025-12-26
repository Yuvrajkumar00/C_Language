// ========================== ASSIGNMENT - 2 ============================

// Write a program to take date as an input in below given format and convert the date format and display the result as given below.

// User input date format - "DD/MM/YYYY" (27/11/2022)
// Output format - "Day-DD, Month - MM, Year-YYYY" (Day-27, Month-11, Year-2022)

/*
Program: Display Date in Custom Format.
Description: Take a date from the user in a given format (DD/MM/YYYY) and print the date in this given format (Day-DD, Month-MM, Year-YYYY)

Input      : Take a date from the user in DD/MM/YYYY format.
Processing : Separate day, month, and year values.
Output     :  Display the date in Day-DD, Month-MM, Year-YYYY format.
*/

#include <stdio.h>

int main () {
    int day, month, year;

    // Take data from user
    printf("Enter a date in this format (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Display thd data
    printf("Day-%d, Month-%d, Year-%d", day, month, year);

    return 0;
}