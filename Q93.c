//check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}
bool areAnagrams(char str1[], char str2[]) {
    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; str1[i]; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
    }

    for (int i = 0; str2[i]; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}