//wap to take a number as input and print its equivalent binary representation without arrays.

#include<stdio.h>
int main() {
    int num, binaryNum = 0, place = 1;

    // Input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert to binary representation
    while (num > 0) {
        int remainder = num % 2; // Get the last binary digit
        binaryNum += remainder * place; // Add it to the binary number at the correct place
        place *= 10; // Move to the next place (10, 100, 1000, ...)
        num /= 2; // Remove the last binary digit from the original number
    }

    // Output the binary representation
    printf("Binary representation: %d\n", binaryNum);

    return 0;
}