// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:- Print the output for each element in a comma separated fashion.\
    - Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>
void findNextGreaterElements(int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = -1; // Default value if no greater element is found
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; // Next greater element found
                break;
            }
        }
    }
}

int main() {
    int arr[100], size, result[100];

    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater elements
    findNextGreaterElements(arr, size, result);

    // Print the result in comma separated fashion
    printf("Next greater elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}