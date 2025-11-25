// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
void sortArray(int arr[], int size) {
    // Simple Bubble Sort to sort the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int findKthSmallest(int arr[], int size, int k) {
    sortArray(arr, size); // Sort the array
    return arr[k - 1]; // Return the kth smallest element
}
int main() {
    int arr[100], size, k;

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

    // Find the kth smallest element
    int kthSmallest = findKthSmallest(arr, size, k);

    // Print the result
    printf("The %dth smallest element is: %d\n", k, kthSmallest);

    return 0;
}