//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100], n, element, position, i;

    // Read the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Read the position where the element is to be inserted
    printf("Enter the position (0 to %d) to insert the element: ", n);
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}