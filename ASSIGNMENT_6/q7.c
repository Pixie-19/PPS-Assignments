// Write a C program to check whether the given matrix is an identity matrix or not.
#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;
    int is_identity = 1; // Flag variable: 1 means true, 0 means false

    // Identity matrices must be square (Rows = Columns)
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

    // Display the entered matrix
    printf("\nEntered Matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Check identity matrix conditions
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Condition 1: Main diagonal elements must be 1
            if (i == j && a[i][j] != 1) {
                is_identity = 0;
                break; // Break the inner loop
            }
            // Condition 2: Non-diagonal elements must be 0
            else if (i != j && a[i][j] != 0) {
                is_identity = 0;
                break; // Break the inner loop
            }
        }
        if (is_identity == 0) {
            break; // Break the outer loop early since it's already invalid
        }
    }

    // Output the result
    if (is_identity == 1) {
        printf("\nThe given matrix IS an Identity Matrix.\n");
    } else {
        printf("\nThe given matrix IS NOT an Identity Matrix.\n");
    }

    return 0;
}