// Write a C program to find maximum and minimum elements in array using recursive function

#include <stdio.h>

// Structure to return both max and min from the recursive function
struct MinMax {
    int min;
    int max;
};

struct MinMax findMinMax(int arr[], int index, int size);

int main() {
    int arr[100];
    int size, i;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the recursive function starting from index 0
    struct MinMax result = findMinMax(arr, 0, size);

    printf("\nMinimum element: %d\n", result.min);
    printf("Maximum element: %d\n", result.max);

    return 0;
}

struct MinMax findMinMax(int arr[], int index, int size) {
    struct MinMax result, resultNext;

    // Base Case: If it's the last element of the array
    if (index == size - 1) {
        result.max = arr[index];
        result.min = arr[index];
        return result;
    }

    // Recursive call to find min/max for the rest of the array
    resultNext = findMinMax(arr, index + 1, size);

    // Compare current element with the results of the remaining elements
    if (arr[index] > resultNext.max) {
        result.max = arr[index];
    } else {
        result.max = resultNext.max;
    }

    if (arr[index] < resultNext.min) {
        result.min = arr[index];
    } else {
        result.min = resultNext.min;
    }

    return result;
}