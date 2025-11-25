// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char text[1000];

    // Read the filename
    printf("Enter the filename to append text: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read the text to append
    printf("Enter the text to append (max 999 characters): ");
    getchar(); // Clear the newline character from the buffer
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("Text appended to %s successfully.\n", filename);
    return 0;
}