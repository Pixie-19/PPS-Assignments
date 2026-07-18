//Write a C program to multiply two matrices.

#include <stdio.h>

int main() {
    // a[10][10], b[10][10], multiply[10][10] are arrays
    int a[10][10], b[10][10], multiply[10][10];
    int m, n, p, q, i, j, k, sum;

    // Input dimensions for matrix A
    printf("Enter number of rows and columns of a matrix:\n");
    scanf("%d %d", &m, &n);

    // Basic bounds checking to prevent buffer overflow
    if (m > 10 || n > 10 || m < 1 || n < 1) {
        printf("Error: Matrix sizes must be between 1 and 10.\n");
        return 1;
    }

    // Input elements for matrix A
    printf("Enter elements of a matrix\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input dimensions for matrix B
    printf("Enter number of rows and columns of b matrix\n");
    scanf("%d %d", &p, &q);

    if (q > 10 || p > 10 || q < 1 || p < 1) {
        printf("Error: Matrix sizes must be between 1 and 10.\n");
        return 1;
    }

    // Checking if multiplication is possible
    if (n != p) {
        printf("The multiplication isn't possible.\n");
    } 
    else {
        // Input elements for matrix B
        printf("Enter elements of b matrix\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                printf("Enter element b[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }

        // Multiplication logic
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                sum = 0;
                for (k = 0; k < n; k++) { // n is equal to p
                    sum = sum + a[i][k] * b[k][j];
                }
                multiply[i][j] = sum;
            }
        }

        // Printing the result
        printf("\nProduct of the matrices:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", multiply[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}