// Print each character of a string on a new line.
#include <stdio.h>
int main() {    
    char str[1000];

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print each character on a new line until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        // Exclude the newline character added by fgets
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}