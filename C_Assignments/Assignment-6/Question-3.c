// ============================ ASSIGNMENT - 6 =============================

// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

/*
Program: Check Pass or Fail of a Candidate in 5 Subjects.
Description: This program takes marks of 5 subjects (out of 100) from the user and checks whether the candidate has passed or failed the examination. Passing marks for each subject is 33. The program also validates the input to ensure marks are within 0–100.

Input : Marks of 5 subjects (m1, m2, m3, m4, m5).

Processing :
    - Check if each mark is valid (0–100).
    - If any mark is invalid, display “Invalid marks”.
    - If all marks ≥ 33, candidate passes.
    - If any mark < 33, candidate fails.

Output :
    - “The candidate has passed the examination”
    - “The candidate has failed the examination”
    - “Invalid marks” (if any mark is out of range)
*/

#include <stdio.h>

int main () {
    int m1, m2, m3, m4, m5;

    // Take data from the user
    printf("Enter a marks out of 100 of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Checking candidate passed the examination or failed
    if ((m1 >100 || m1 < 0) || 
        (m2 >100 || m2 < 0) || 
        (m3 >100 || m3 < 0) || 
        (m4 >100 || m4 < 0) || 
        (m5 >100 || m5 < 0))
    {
        printf("Invalid marks");
    }
    else if(m1 >= 33 && 
            m2 >= 33 && 
            m3 >= 33 && 
            m4 >= 33 && 
            m5 >= 33)
    {
        printf("The candidate has passed the examination");
    }
    else
    {
        printf("The candidate has failed the examination");
    }

    return 0;    
}