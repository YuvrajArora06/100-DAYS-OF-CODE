// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int maxSubarraySum(int arr[], int size) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < size; i++) {
        maxEndingHere = (arr[i] > (maxEndingHere + arr[i])) ? arr[i] : (maxEndingHere + arr[i]);
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }

    return maxSoFar;
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

    // Find the maximum subarray sum
    int maxSum = maxSubarraySum(arr, size);

    // Print the result
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}