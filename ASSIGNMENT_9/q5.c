// Write a C program to add two matrix using pointers

#include <stdio.h>

#define MAX 100 // Maximum capacity allocated at compile-time

int main() {
    int rows, cols;

    // 1. Get the dimensions from the user
    printf("Enter the number of rows (max %d): ", MAX);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX);
    scanf("%d", &cols);

    // Safety check to ensure we don't breach array bounds
    if (rows > MAX || cols > MAX || rows <= 0 || cols <= 0) {
        printf("Error: Dimensions must be between 1 and %d.\n", MAX);
        return 1;
    }

    // Allocate arrays using the constant value MAX
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];

    // Initialize pointers to the first element of each matrix
    int *ptrA = &a[0][0];
    int *ptrB = &b[0][0];
    int *ptrSum = &sum[0][0];

    // 2. Input elements for Matrix A
    printf("\nEnter elements for Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i, j);
            // We use MAX for memory stepping because the physical row width is 100
            scanf("%d", (ptrA + (i * MAX + j)));
        }
    }

    // 3. Input elements for Matrix B
    printf("\nEnter elements for Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", (ptrB + (i * MAX + j)));
        }
    }

    // 4. Adding the matrices using pointers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int offset = i * MAX + j;
            *(ptrSum + offset) = *(ptrA + offset) + *(ptrB + offset);
        }
    }

    // 5. Displaying the resulting sum matrix
    printf("\nResultant Sum Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(ptrSum + (i * MAX + j)));
        }
        printf("\n"); 
    }

    return 0;
}