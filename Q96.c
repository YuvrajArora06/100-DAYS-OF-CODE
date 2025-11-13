//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[1000];
    char* wordStart = NULL;
    char* temp = str;

    // Read a string from the user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Reverse each word in the sentence
    while (*temp) {
        if ((wordStart == NULL) && (*temp != ' ')) {
            wordStart = temp; // Mark the start of a word
        }
        if (wordStart && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) {
            reverseWord(wordStart, temp); // Reverse the word
            wordStart = NULL; // Reset for the next word
        }
        temp++;
    }

    // Print the modified sentence
    printf("Sentence with each word reversed: %s\n", str);

    return 0;
}