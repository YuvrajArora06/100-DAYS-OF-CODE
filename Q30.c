//wap to reverse a given number
#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}