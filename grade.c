#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    switch (marks/10) {
        case 10:
        case 9:
            if (marks >= 95 && marks <= 100)
                grade = 'A';
            else
                grade = 'A';
            break;
        case 8:
            if (marks >= 85 && marks < 90)
                grade = 'B';
            else if (marks >= 80 && marks < 85)
                grade = 'B';
            else
                grade = 'C';
            break;
        case 7:
            if (marks >= 75 && marks < 80)
                grade = 'C';
            else if (marks >= 70 && marks < 75)
                grade = 'C';
            else
                grade = 'D';
            break;
        case 6:
            if (marks >= 65 && marks < 70)
                grade = 'D';
            else if (marks >= 60 && marks < 65)
                grade = 'D';
            else
                grade = 'F';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("The grade obtained by the student is: %c", grade);

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
        printf("+");

    printf("\n");

    return 0;
}
