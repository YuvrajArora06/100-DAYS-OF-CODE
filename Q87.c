//Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main() {
    char str[1000];
    int i, spaces = 0, digits = 0, specialChars = 0;

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count spaces, digits, and special characters
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') && str[i] != '\n') {
            specialChars++;
        }
    }

    // Print the counts
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}