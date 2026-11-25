/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 9: Design a structure student_record to contain name, roll_number,
 * and total marks obtained. Write a program to read 5 students data from the
 * user and then display the topper on the screen.
 */

#include <stdio.h>

struct student_record {
    char name[100];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];
    int topperIndex = 0;

    printf("--- Student Record & Topper Finder (5 Students) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name        : ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number : ");
        scanf("%d", &students[i].roll_number);
        printf("Total Marks : ");
        scanf("%f", &students[i].total_marks);

        if (students[i].total_marks > students[topperIndex].total_marks) {
            topperIndex = i;
        }
    }

    printf("\n==========================================\n");
    printf("                 TOPPER\n");
    printf("==========================================\n");
    printf("Name        : %s\n", students[topperIndex].name);
    printf("Roll Number : %d\n", students[topperIndex].roll_number);
    printf("Total Marks : %.2f\n", students[topperIndex].total_marks);
    printf("==========================================\n");

    return 0;
}
