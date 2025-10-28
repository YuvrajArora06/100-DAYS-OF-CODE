//wap to check whether a number is an armstrong number or not
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}