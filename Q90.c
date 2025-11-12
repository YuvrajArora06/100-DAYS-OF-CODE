//Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, but simple for beginners

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert uppercase to lowercase
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert lowercase to uppercase
        }
    }

    printf("Toggled case string: %s", str);
    return 0;
}

