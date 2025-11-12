//Check if a string is a palindrome.
#include<stdio.h>
int main(){
    char str[1000];
    int i, len = 0, isPalindrome = 1;

    // Read a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;

    
}