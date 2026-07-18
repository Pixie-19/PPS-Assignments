//Write a C program to find sum of each row and column of a matrix
#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j, sum;

    // Input dimensions
    printf("Enter the number of rows (between 1 and 10): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 10): ");
    scanf("%d", &c);

    // Bounds checking
    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Error: Rows and columns must be between 1 and 10.\n");
        return 1;
    }

    // Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered Matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Calculate and print Sum of each Row
    printf("\n--- Row Sums ---\n");
    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    // Calculate and print Sum of each Column
    printf("\n--- Column Sums ---\n");
    for (j = 0; j < c; j++) {
        sum = 0;
        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}