//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int arr[100], n, element, i, j;

    // Read the number of elements
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    // Read elements into the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the element
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element
    arr[i] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}