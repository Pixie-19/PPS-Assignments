// Write a C program to perform Scalar matrix multiplication
#include <stdio.h>

int main() {
    // a[10][10] and result[10][10] are arrays
    int a[10][10], result[10][10];
    int r, c, i, j, scalar;

    // Input dimensions for the matrix
    printf("Enter the number of rows (between 1 and 10): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 10): ");
    scanf("%d", &c);

    // Bounds checking to keep the array safe
    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Error: Rows and columns must be between 1 and 10.\n");
        return 1;
    }

    // Input elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input the scalar value
    printf("\nEnter the scalar value to multiply with: ");
    scanf("%d", &scalar);

    // Performing Scalar Multiplication
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            result[i][j] = scalar * a[i][j];
        }
    }

    // Displaying the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Displaying the resulting matrix
    printf("\nResultant Matrix after scalar multiplication by %d:\n", scalar);
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}