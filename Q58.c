// Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int arr[100], n;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
