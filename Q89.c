//wap to Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], ch;
    int i, count = 0;

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Read the character to be counted
    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    // Count the frequency of the given character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print the frequency
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}