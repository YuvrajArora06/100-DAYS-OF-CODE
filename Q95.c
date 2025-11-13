//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if (len1 != len2) {
        return 0;
    }

    // Create a new string by concatenating str1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the new string
    if (strstr(temp, str2) != NULL) {
        return 1;
    } else {
        return 0;
    }
}