//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student *studentPtr;

    // Allocate memory for a Student structure
    studentPtr = (struct Student *)malloc(sizeof(struct Student));
    if (studentPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read student details
    printf("Enter Student Name: ");
    scanf("%s", studentPtr->name);
    printf("Enter Roll Number: ");
    scanf("%d", &studentPtr->roll_no);
    printf("Enter Marks: ");
    scanf("%f", &studentPtr->marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", studentPtr->name);
    printf("Roll Number: %d\n", studentPtr->roll_no);
    printf("Marks: %.2f\n", studentPtr->marks);

    // Free the allocated memory
    free(studentPtr);

    return 0;
}