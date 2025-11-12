//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;

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

    // Perform diagonal traversal
    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        // Determine the starting point of this diagonal
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        // Traverse the diagonal
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n"); // New line after each diagonal
    }

    return 0;
}