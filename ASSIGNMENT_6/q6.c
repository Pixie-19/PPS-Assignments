// Write a C program to find upper triangular matrix and lower triangular matrix.

#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;

    // Triangular matrices must be square (Rows = Columns = n)
    printf("Enter the size of the square matrix (between 1 and 10): ");
    scanf("%d", &n);

    // Bounds checking
    if (n < 1 || n > 10) {
        printf("Error: Size must be between 1 and 10.\n");
        return 1;
    }

    // Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display Upper Triangular Matrix
    printf("\nUpper Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                printf("0\t"); // Zero out elements below the main diagonal
            } else {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }

    // Display Lower Triangular Matrix
    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j) {
                printf("0\t"); // Zero out elements above the main diagonal
            } else {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}