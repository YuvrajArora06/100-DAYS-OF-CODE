//Replace spaces with hyphens in a string.
#include<stdio.h>
int main(){
    
    char str[1000];
    int i;

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}