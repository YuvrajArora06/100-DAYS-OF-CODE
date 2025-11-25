//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>
void toSentenceCase(char *str) {
    int len = strlen(str);
    int capitalizeNext = 1; // Flag to indicate if the next character should be capitalized

    for (int i = 0; i < len; i++) {
        if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
            capitalizeNext = 0; // Reset flag
        } else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1; // Set flag to capitalize next character
        } else if (str[i] != ' ') {
            capitalizeNext = 0; // Reset flag if current character is not a space
        }
    }
}
int main() {
    char str[1000];

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Convert to sentence case
    toSentenceCase(str);

    // Print the result
    printf("String in sentence case: %s\n", str);

    return 0;
}
