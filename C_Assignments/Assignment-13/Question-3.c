// ============================== ASSIGNMENT - 13 ===============================

// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>

int main () {
    int day;

    // Take data from the user
    printf("Enter a day number of a week: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday is good for starting new things.");
        break;
    case 2:
        printf("Tuesday is Worship day.");
        break;
    case 3:
        printf("Wonderfull Wednesday.");
        break;
    case 4:
        printf("Jio jii bhar ke.");
        break;
    case 5:
        printf("Thanks god its friday.");
        break;
    case 6:
        printf("Saturday is dangerous day.");
        break;
    case 7:
        printf("Sunday is Holiday.");
        break;
    default:
        printf("Invalid day number.");
    }

    return 0;
}