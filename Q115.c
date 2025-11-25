// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int areAnagrams(char *s, char *t) {
    int count[26] = {0}; // Array to store frequency of each character

    // Count frequency of each character in string s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Decrease frequency based on characters in string t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not an anagram
        }
    }

    return 1; // Anagram
}   
int main() {
    char s[100], t[100];

    // Read the first string
    printf("Enter the first string (s): ");
    fgets(s, sizeof(s), stdin);
    size_t len_s = strlen(s);
    if (len_s > 0 && s[len_s - 1] == '\n') {
        s[len_s - 1] = '\0'; // Remove newline character
    }

    // Read the second string
    printf("Enter the second string (t): ");
    fgets(t, sizeof(t), stdin);
    size_t len_t = strlen(t);
    if (len_t > 0 && t[len_t - 1] == '\n') {
        t[len_t - 1] = '\0'; // Remove newline character
    }

    // Check if the strings are anagrams
    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}