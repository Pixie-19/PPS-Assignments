// C Program to Find Largest Number from an array. Array must be declared using Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {
    int n;
    int *arr;
    int largest;

    // 1. Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate that the user entered a positive size
    if (n <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    // 2. Dynamically allocate memory for 'n' integers
    // malloc calculates the total bytes needed: (number of elements * size of 1 integer)
    arr = (int *)malloc(n * sizeof(int));

    // CRITICAL SAFETY CHECK: Verify if memory was successfully allocated
    if (arr == NULL) {
        printf("Memory allocation failed! Out of memory.\n");
        return 1; 
    }

    // 3. Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        // Using standard array indexing with our dynamic pointer
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    // 4. Find the largest number
    // Start by assuming the very first element is the largest
    largest = arr[0]; 

    // Loop through the rest of the array to check our assumption
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a bigger number is found
        }
    }

    // 5. Display the result
    printf("\nThe largest element in the array is: %d\n", largest);

    // 6. CRITICAL CLEANUP: Always free dynamically allocated memory when finished
    free(arr);
    arr = NULL; // Good practice: point to NULL so we don't accidentally use a dead pointer

    return 0;
}