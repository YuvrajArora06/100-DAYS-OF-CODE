//Write a program to print the following pattern:
/*
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
int main() {
    int i, j, space;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}