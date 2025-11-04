// Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;
    int isSymmetric = 1; // Flag to check symmetry

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // A matrix can only be symmetric if it is square
    if (rows != cols) {
        printf("The matrix is not symmetric (not square).\n");
        return 0;
    }

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Output the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}