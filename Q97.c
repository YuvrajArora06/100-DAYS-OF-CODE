//Print the initials of a name.
#include <stdio.h>
#include <string.h>
int main() {
    char name[1000];
    int i;

    // Read a full name from the user
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the initials
    printf("Initials: ");
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]); // Print the first character if it's not a space
    }
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]); // Print the character after a space
        }
    }
    printf("\n");

    return 0;
}