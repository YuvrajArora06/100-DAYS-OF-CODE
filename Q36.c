//wap to find the GCD two numbers.

#include <stdio.h>
int main() {
    int num1, num2, gcd, i;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the GCD
    for (i = 1; i <= num1 && i <= num2; ++i) {
        // Check if i is a factor of both numbers
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Output the GCD
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}

