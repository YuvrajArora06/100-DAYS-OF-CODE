//wap to find the product of the odd digits of a number

#include <stdio.h>
int main() {    
    int num, product = 1, remainder;
    int hasOddDigit = 0; // Flag to check if there is at least one odd digit

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the product of odd digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if the digit is odd
            product *= remainder; // Multiply it to the product
            hasOddDigit = 1; // Set the flag to true
        }
        num /= 10; // Remove the last digit from the original number
    }

    // Output the result
    if (hasOddDigit) {
        printf("Product of the odd digits: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}