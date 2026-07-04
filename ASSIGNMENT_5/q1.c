/* Write a C program to find the sum of all elements of an array. */
#include <stdio.h>

int main() {
    int n, index;
    int sum = 0;
    float average;
    int a[100];

    printf("Enter number of elements in array: ");
    scanf("%d", &n); 

    for(index = 0; index < n; index++) {
        printf("Enter data for a[%d]: ", index);
        scanf("%d", &a[index]);
    }
    for(index = 0; index < n; index++) {
        sum = sum + a[index];
    }
    average = (float)sum / n; 

    printf("\n--- Results ---\n");
    printf("Sum of all elements = %d\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}