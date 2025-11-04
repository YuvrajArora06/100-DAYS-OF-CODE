//Find the digit that occurs the most times in an integer number.

#include <stdio.h>  
int main() {
    int num, digitCount[10] = {0}, maxCount = 0, mostFrequentDigit = -1;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Count occurrences of each digit
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        digitCount[digit]++; // Increment the count for this digit
        num /= 10; // Remove the last digit from the original number
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    // Output the result
    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    } else {
        printf("No digits found.\n");
    }

    return 0;
}