//  Write a C program to sort an array using pointers (Any technique)

#include <stdio.h>

#define MAX_SIZE 100 // Define a constant maximum limit

void bubbleSort(int *ptr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements using pointers
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;

    // 1. Get user size and make sure it fits our constant limit
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // 2. Declare the array using our CONSTANT macro
    int arr[MAX_SIZE]; 
    int *ptr = arr; 

    // 3. Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); 
    }

    // 4. Sort the array
    bubbleSort(arr, n);

    // 5. Print the sorted array
    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}