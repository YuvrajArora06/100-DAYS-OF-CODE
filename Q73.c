// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;
    int rowSums[100];

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j]; // Add each element in the row to the sum
        }
    }

    // Print the sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}