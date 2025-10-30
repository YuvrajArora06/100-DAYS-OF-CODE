// Write a program to print the following pattern:

   /*
  ***
 *****
*******
 *****
  ***
   */

#include <stdio.h>  
int main() {
    int i, j, space;
    int rows = 4;

    // Upper half of the pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = i; space < rows; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = rows; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}