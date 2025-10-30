// Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int arr[100], n;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the results
    printf("Positive numbers count: %d\n", positiveCount);
    printf("Negative numbers count: %d\n", negativeCount);
    printf("Zero count: %d\n", zeroCount);

    return 0;
}
