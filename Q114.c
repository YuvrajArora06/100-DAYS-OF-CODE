//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int maxLength = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int seen[256] = {0}; // Array to track seen characters
        int currentLength = 0;

        for (int j = i; j < len; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break; // Character already seen, break the inner loop
            }
            seen[(unsigned char)s[j]] = 1; // Mark character as seen
            currentLength++;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength; // Update maxLength if currentLength is greater
        }
    }

    return maxLength;
}
int main() {
    char s[100];

    // Read the input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove the newline character if present
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    // Find the length of the longest substring without repeating characters
    int length = lengthOfLongestSubstring(s);

    // Print the result
    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}