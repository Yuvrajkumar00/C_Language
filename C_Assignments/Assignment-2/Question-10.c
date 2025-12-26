// ========================== ASSIGNMENT - 2 ============================

// Write a program to take time as an input in below given format and convert the time format and diaplay the result as given below.

// User input time format - "HH:MM"
// Output format - "HH hour and MM Minute"

/*
Program: Display Time in Custom Format.
Description: Take a time from the user in a given format (HH:MM) and print the time in this given format (HH hour and MM Minute)

Input      : Take a time from the user in HH:MM format.
Processing : Separate hour and minute values.
Output     :  Display the time in HH hour and MM Minute.
*/

#include <stdio.h>

int main () {
    int hour, minute;

    // Take data from user
    printf("Enter a date in this format (HH:MM): ");
    scanf("%d:%d", &hour, &minute);

    // Display thd data
    printf("%d hour and %d Minute", hour, minute);

    return 0;
}