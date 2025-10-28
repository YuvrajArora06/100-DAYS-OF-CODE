//Write a program to swap the first and last digit of a number.


#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0, swapped_num, pow10 = 1, middle;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    last = num % 10;  // Get last digit
    
    // Find first digit and count digits
    while (temp >= 10) {
        temp = temp / 10;
        pow10 *= 10;
        digits++;
    }
    first = temp;  // First digit is left in temp
    
    // Remove first and last digits
    middle = num % pow10;  // Remove first digit
    middle = middle / 10;  // Remove last digit
    
    // Form new number with swapped digits
    swapped_num = last * pow10 + middle * 10 + first;
    
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    
    return 0;
}
 