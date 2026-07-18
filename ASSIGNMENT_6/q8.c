// Write a C program to check Symmetric matrix.

#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;
    int is_symmetric = 1; // Flag variable: 1 means true, 0 means false

    // Symmetric matrices must be square (Rows = Columns)
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

    // Check for symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Compare the element with its mirror across the diagonal
            if (a[i][j] != a[j][i]) {
                is_symmetric = 0; 
                break; // Break the inner loop
            }
        }
        if (is_symmetric == 0) {
            break; // Break the outer loop early if a mismatch is found
        }
    }

    // Output the result
    if (is_symmetric == 1) {
        printf("\nThe given matrix IS a Symmetric Matrix.\n");
    } else {
        printf("\nThe given matrix IS NOT a Symmetric Matrix.\n");
    }

    return 0;
}