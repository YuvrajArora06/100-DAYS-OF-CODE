//Multiply two matrices.
#include <stdio.h>
int main() {
    int matrix1[100][100], matrix2[100][100], productMatrix[100][100];
    int rows1, cols1, rows2, cols2;

    // Read the number of rows and columns for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Read elements into the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the number of rows and columns for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible (columns of first matrix must equal rows of second matrix).\n");
        return 0;
    }

    // Read elements into the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            productMatrix[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the resulting product matrix
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (