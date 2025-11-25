// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    FILE *file;
    struct Employee empWrite, empRead;
    int n, i;

    // Read number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Open the binary file for writing employee records
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Could not open file employees.dat for writing\n");
        return 1;
    }

    // Read employee records and write to binary file
    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", empWrite.name);
        printf("ID: ");
        scanf("%d", &empWrite.id);
        printf("Salary: ");
        scanf("%f", &empWrite.salary);

        fwrite(&empWrite, sizeof(struct Employee), 1, file);
    }

    // Close the file after writing
    fclose(file);

    // Open the binary file for reading employee records
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Could not open file employees.dat for reading\n");
        return 1;
    }

    // Read and display employee records from the binary file
    printf("\nEmployee Records:\n");
    printf("-----------------\n");
    while (fread(&empRead, sizeof(struct Employee), 1, file) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
