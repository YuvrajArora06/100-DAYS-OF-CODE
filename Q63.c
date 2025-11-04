//Merge two arrays.

#include <stdio.h>
int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int n1, n2, i, j;

    // Read the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    // Read elements into the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    // Read elements into the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    for (i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        mergedArr[i + j] = arr2[j];
    }

    // Print the merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}