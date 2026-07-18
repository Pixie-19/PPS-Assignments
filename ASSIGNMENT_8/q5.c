// Write a function in C program to sort all elements of an array in ascending order using bubble sort technique

#include <stdio.h>

// Function declaration
void bubbleSort(int arr[], int size);

int main() {
    int arr[100]; // Fixed maximum size to prevent constant-value compilation errors
    int size, i;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    // Safeguard for array bounds
    if (size > 100 || size <= 0) {
        printf("Invalid size! Please run the program again and choose a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the sorting function
    bubbleSort(arr, size);

    // Print the sorted array
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function definition for Bubble Sort
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    
    // Outer loop runs size - 1 times
    for (i = 0; i < size - 1; i++) {
        
        // Inner loop does the adjacent comparisons
        for (j = 0; j < size - 1 - i; j++) {
            
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}