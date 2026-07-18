//Write a C program to find transpose of a matrix.
#include <stdio.h>

int main() {
    // int a[10][10], transpose[10][10] are arrays
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Safety bounds check to stay within the array limits
    if (r > 10 || c > 10 || r < 1 || c < 1) {
        printf("Error: Rows and columns must be between 1 and 10.\n");
        return 1;
    }

    // Assigning elements to the matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Displaying the matrix a[][]
    printf("\nEntered matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    // Displaying the transpose of matrix a
    // Note: The loop limits change here because the new matrix has 'c' rows and 'r' columns
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i) {
        for (j = 0; j < r; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}