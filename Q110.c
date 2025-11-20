// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
void maxInEachSubarray(int arr[], int size, int k, int result[]) {
    for (int i = 0; i <= size - k; i++) {
        int maxElement = arr[i]; // Initialize maxElement for the current subarray
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j]; // Update maxElement if a larger element is found
            }
        }
        result[i] = maxElement; // Store the maximum element of the current subarray
    }
}
int main() {
    int arr[100], size, k, result[100];

    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of k
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Find maximum in each subarray of size k
    maxInEachSubarray(arr, size, k, result);

    // Print the result
    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= size - k; i++) {
        printf("%d", result[i]);
        if (i < size - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
