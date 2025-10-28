//wap to find the LCM of two given numbers 
#include <stdio.h>
int main() {
    int num1, num2, max, lcm;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Calculate LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

    // Output the LCM
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
