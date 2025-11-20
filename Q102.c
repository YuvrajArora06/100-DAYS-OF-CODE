//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>
int findCeilIndex(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid; // Potential ceil found
            right = mid - 1; // Look for a smaller index
        } else {
            left = mid + 1; // Move to the right half
        }
    }

    return ceilIndex;
}
int main() {
    int arr[100], size, x;

    // Read size of the array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    // Read elements of the sorted array
    printf("Enter %d elements of the sorted array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the ceil index
    int ceilIndex = findCeilIndex(arr, size, x);

    // Print the result
    printf("Index of the ceil of %d: %d\n", x, ceilIndex);

    return 0;
}