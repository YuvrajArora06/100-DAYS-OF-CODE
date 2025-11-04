// Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int arr[100], n, target, found = 0;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}