// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
void productExceptSelf(int nums[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = 1; // Initialize result[i] to 1
        for (int j = 0; j < size; j++) {
            if (i != j) {
                result[i] *= nums[j]; // Multiply all elements except nums[i]
            }
        }
    }
}
int main() {
    int nums[100], size, result[100];

    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    productExceptSelf(nums, size, result);

    // Print the result
    printf("Product array except self: ");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}