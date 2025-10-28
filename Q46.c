// Write a program to print the following pattern:
/*****
 ****
 *****
 *****
 *****/

#include <stdio.h>
int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            // Print '*' for all rows except the second row
            if (i == 2) {
                // Print one less '*' in the second row
                if (j < rows) {
                    printf("*");
                }
            } else {
                printf("*");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
