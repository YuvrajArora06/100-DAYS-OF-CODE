//wap to find the 1st complement of a binary number
#include <stdio.h>
int main() {
    int num, complement = 0, place = 1;

    // Input a binary number
    printf("Enter a binary number: ");
    scanf("%d", &num);

    // Calculate the 1's complement
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        int flippedDigit = (digit == 0) ? 1 : 0; // Flip the digit
        complement += flippedDigit * place; // Add it to the complement at the correct place
        place *= 10; // Move to the next place (10, 100, 1000, ...)
        num /= 10; // Remove the last digit from the original number
    }

    // Output the 1's complement
    printf("1's complement: %d\n", complement);

    return 0;
}