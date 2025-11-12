//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[1000];

    // Read a lowercase string from the user
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
    }

    // Print the converted uppercase string
    printf("The uppercase string is: %s", str);

    return 0;
}