#include <stdio.h>

int main() {
    int totalStudents, m1, m2, m3;
    float avg;
    char grade;

    printf("===== SUNDALE SCHOOL REPORT CARD GENERATOR =====\n");
    printf("Enter total number of students in class: ");
    scanf("%d", &totalStudents);

    for (int i = 1; i <= totalStudents; i++) {
        printf("\n-----------------------------------\n");
        printf("Processing Student %d of %d\n", i, totalStudents);
        printf("-----------------------------------\n");

        printf("Enter marks for Subject 1 (out of 100): ");
        scanf("%d", &m1);
        printf("Enter marks for Subject 2 (out of 100): ");
        scanf("%d", &m2);
        printf("Enter marks for Subject 3 (out of 100): ");
        scanf("%d", &m3);

        avg = (m1 + m2 + m3) / 3.0;

        switch ((int)(avg / 10)) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }

        char* status = (avg >= 60.0 && m1 >= 40 && m2 >= 40 && m3 >= 40) ? "PASSED" : "FAILED";

        printf("Average Marks: %.2f\n", avg);
        printf("Letter Grade: %c\n", grade);
        printf("Overall Result: %s\n", status);
    }

    printf("\nAll student records processed successfully.\n");
    return 0;
}