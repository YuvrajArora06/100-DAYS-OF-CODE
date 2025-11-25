// write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>
void firstNegativeInEachSubarray(int arr[], int size, int k, int result[]) {
    for (int i = 0; i <= size - k; i++) {
        result[i] = 0; // Default value if no negative integer is found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j]; // First negative integer found
                break;
            }
        }
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

    // Find first negative integer in each subarray of size k
    firstNegativeInEachSubarray(arr, size, k, result);

    // Print the result
    printf("First negative integers in each subarray of size %d: ", k);
    for (int i = 0; i <= size - k; i++) {
        printf("%d", result[i]);
        if (i < size - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}