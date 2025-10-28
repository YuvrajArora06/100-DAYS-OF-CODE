//wap to check whether a number is prime or not 
#include <stdio.h>
#include <stdbool.h>
int main() {
    int num, i;
    bool isPrime = true;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = false;
    } else {
        // Check for factors from 2 to the square root of num
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}