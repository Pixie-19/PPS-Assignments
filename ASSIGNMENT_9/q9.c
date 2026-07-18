// Write a C program to search an element in array using pointers.

#include <stdio.h>

#define MAX_SIZE 100 // Constant capacity to avoid compiler errors

int main() {
    int arr[MAX_SIZE];
    int n, elementToSearch;
    int found = 0; // Flag to keep track if we found the element
    int index = -1; // Keeps track of where we found it

    // 1. Get the size of the array
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Validate size
    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Set up our pointer to look at the start of the array
    int *ptr = arr; 

    // 2. Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); // (ptr + i) is the memory address of index i
    }

    // 3. Get the element to search for
    printf("\nEnter the element you want to search: ");
    scanf("%d", &elementToSearch);

    // 4. Perform Linear Search using pointers
    for (int i = 0; i < n; i++) {
        // *(ptr + i) checks the value stored at the current memory address
        if (*(ptr + i) == elementToSearch) {
            found = 1;
            index = i;
            break; // Found it! We can stop searching now
        }
    }

    // 5. Display the result
    if (found == 1) {
        printf("Success! Element %d found at index position %d.\n", elementToSearch, index);
    } else {
        printf("Element %d was not found in the array.\n", elementToSearch);
    }

    return 0;
}