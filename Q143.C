// Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    struct Student *topStudent = NULL;

    // Read details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with the highest marks
    for (int i = 0; i < 5; i++) {
        if (topStudent == NULL || students[i].marks > topStudent->marks) {
            topStudent = &students[i];
        }
    }

    // Print the details of the student with the highest marks
    if (topStudent != NULL) {
        printf("\nStudent with the highest marks:\n");
        printf("Name: %s\n", topStudent->name);
        printf("Roll Number: %d\n", topStudent->roll_no);
        printf("Marks: %.2f\n", topStudent->marks);
    }

    return 0;
}
