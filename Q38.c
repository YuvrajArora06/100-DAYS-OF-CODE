//wap to find the sum of the digits of a number

#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of the digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder; // Add it to the sum
        num /= 10; // Remove the last digit from the original number
    }

    // Output the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}