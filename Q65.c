//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int arr[100], n, target, left, right, mid;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements (sorted):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) {
            printf("Element found at index: %d\n", mid);
            return 0;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}