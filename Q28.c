//wap to print the product of even numbers from 1 to n
#include <stdio.h>
int main() {
    int n, i;
    long long product = 1; // Use long long to handle large products

    // Input a positive integer n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Output the result
    if (n >= 2) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}