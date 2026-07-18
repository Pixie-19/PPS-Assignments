// Write a C program to reverse an array using pointers.

#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];
    int *start, *end;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    start = arr;
    end = arr + n - 1;

    // Reverse the array using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}