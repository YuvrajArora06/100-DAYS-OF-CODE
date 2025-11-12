//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;
    int isDistinct = 1; // Flag to check distinctness

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // A matrix can only have a main diagonal if it is square
    if (rows != cols) {
        printf("The matrix does not have a main diagonal (not square).\n");
        return 0;
    }

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for distinct elements on the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Not distinct
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    // Output the result
    if (isDistinct) {
        printf("The elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are not distinct.\n");
    }

    return 0;
}