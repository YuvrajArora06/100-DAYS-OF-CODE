//Reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the string
    for (size_t i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Print the reversed string
    printf("The reversed string is: %s\n", str);

    return 0;
}