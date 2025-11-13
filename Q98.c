//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[1000];
    int i;

    // Read a full name from the user
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the initials and full surname
    printf("Formatted Name: ");
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]); // Print the first initial
    }
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            // Print the initial of middle names
            printf("%c. ", name[i + 1]);
        }
    }

    // Find and print the surname
    char* lastSpace = strrchr(name, ' ');
    if (lastSpace != NULL) {
        printf("%s", lastSpace + 1); // Print the surname
    }

    return 0;
}