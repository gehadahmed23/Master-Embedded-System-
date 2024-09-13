#include <stdio.h>


struct SInfoStudents {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct SInfoStudents students[10];
    int i;

    printf("Enter information of students:\n");

    for (i = 0; i < 10; i++) {
        printf("For roll number %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nDisplaying information of students:\n");

    for (i = 0; i < 10; i++) {
        printf("Information for roll number %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}