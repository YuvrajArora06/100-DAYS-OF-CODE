// write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>
int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Iterate through the array to find the pivot index
    for (int i = 0; i < size; i++) {
        // Right sum is total sum minus left sum minus current element
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i; // Pivot index found
        }

        leftSum += arr[i]; // Update left sum for next iteration
    }

    return -1; // No pivot index found
}

int main() {
    int arr[100], size;

    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the pivot index
    int pivotIndex = findPivotIndex(arr, size);

    // Print the result
    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}