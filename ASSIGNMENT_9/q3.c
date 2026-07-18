//  Write a C program to copy one array to another using pointers.

#include <stdio.h>

#define SIZE 5 // You can change the size of the array here

int main() {
    int sourceArray[SIZE];
    int destArray[SIZE];
    
    int *srcPtr = sourceArray; // Points to sourceArray[0]
    int *destPtr = destArray;   // Points to destArray[0]
    int i;

    // 1. Input elements into the source array
    printf("Enter %d elements for the source array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        // Using pointer arithmetic to store input directly into memory
        scanf("%d", (srcPtr + i)); 
    }

    // 2. Copy elements using pointers
    for (i = 0; i < SIZE; i++) {
        // Dereference the source pointer, grab the value, 
        // and assign it to the dereferenced destination pointer
        *(destPtr + i) = *(srcPtr + i);
    }

    // 3. Print both arrays to verify the copy
    printf("\nSource Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(srcPtr + i));
    }

    printf("\nDestination Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(destPtr + i));
    }
    printf("\n");

    return 0;
}