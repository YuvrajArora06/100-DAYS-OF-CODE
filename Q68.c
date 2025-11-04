//Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100], n, element, i, j, found = 0;

    // Read the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be deleted
    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    // Find the element and delete it
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            // Shift elements to the left to overwrite the deleted element
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Decrease the size of the array
            break;
        }
    }

    if (found) {
        // Print the updated array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}