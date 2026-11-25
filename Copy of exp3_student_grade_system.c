/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 3: WAP to develop a menu-driven Student Grade and Result Management
 * System using switch and goto.
 */

#include <stdio.h>

int main() {
    int choice;
    float m1, m2, m3, total, percentage;
    char grade;
    int marksEntered = 0;

menu:
    printf("\n==============================================\n");
    printf("   STUDENT GRADE & RESULT MANAGEMENT SYSTEM\n");
    printf("==============================================\n");
    printf("1. Enter Marks (3 Subjects)\n");
    printf("2. Calculate Total & Percentage\n");
    printf("3. Display Grade & Result Status\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter marks for Subject 1 (out of 100): ");
            scanf("%f", &m1);
            printf("Enter marks for Subject 2 (out of 100): ");
            scanf("%f", &m2);
            printf("Enter marks for Subject 3 (out of 100): ");
            scanf("%f", &m3);
            total = m1 + m2 + m3;
            percentage = total / 3.0f;
            marksEntered = 1;
            printf("Marks recorded successfully!\n");
            goto menu;

        case 2:
            if (!marksEntered) {
                printf("Please enter marks first (Option 1).\n");
            } else {
                printf("Total Marks : %.2f / 300\n", total);
                printf("Percentage  : %.2f%%\n", percentage);
            }
            goto menu;

        case 3:
            if (!marksEntered) {
                printf("Please enter marks first (Option 1).\n");
            } else {
                if (m1 < 35 || m2 < 35 || m3 < 35) {
                    grade = 'F';
                } else if (percentage >= 85) {
                    grade = 'A';
                } else if (percentage >= 70) {
                    grade = 'B';
                } else if (percentage >= 50) {
                    grade = 'C';
                } else if (percentage >= 35) {
                    grade = 'D';
                } else {
                    grade = 'F';
                }

                printf("Percentage : %.2f%%\n", percentage);
                printf("Grade      : %c\n", grade);
                if (grade != 'F') {
                    printf("Result     : PASS\n");
                } else {
                    printf("Result     : FAIL\n");
                }
            }
            goto menu;

        case 4:
            printf("Exiting program. Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
            goto menu;
    }
}
