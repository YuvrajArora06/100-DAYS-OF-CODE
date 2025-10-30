// Write a program to print the following pattern:
/*

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            // Print '*' for the first and last column
            if (j == 1 || j == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}