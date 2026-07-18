//  Write a C program to sort the all elements of an array in ascending order using quick sort technique
#include <stdio.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);

int main() {
    int arr[100];
    int size, i;

    printf("Enter size of the array (max 100): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, size - 1);

    printf("\nSorted array using Quick Sort:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function using the last element as pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Sort elements before partition
        quickSort(arr, pi + 1, high); // Sort elements after partition
    }
}