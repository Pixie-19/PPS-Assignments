// Linear Search

#include <stdio.h>

// Use a macro instead of a const variable
#define MAX_SIZE 100

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE]; 
    int size, target;

    printf("Enter the number of elements (Max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}