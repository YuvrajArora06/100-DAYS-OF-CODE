//wap to calculate the factorial of a given number.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
