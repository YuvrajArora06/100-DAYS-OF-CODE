//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;
    int sum = 0;

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

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i]; // Add the diagonal element
    }

    // Print the sum of the main diagonal elements
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}