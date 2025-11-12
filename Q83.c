//Count vowels and consonants in a string.
#include <stdio.h>
int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for uniformity
            char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // Check if it is a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print the counts of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}