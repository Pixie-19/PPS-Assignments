//Write a C program to add two matrices of order r x c
#include <stdio.h>

int main() {
    // a[10][10], b[10][10], sum[10][10] are arrays
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    // Input row size
    printf("Enter the number of rows (between 1 and 10): ");
    scanf("%d", &r);

    // Input column size
    printf("Enter the number of columns (between 1 and 10): ");
    scanf("%d", &c);

    // Basic validation to prevent array overflow
    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Error: Rows and columns must be between 1 and 10.\n");
        return 1; 
    }

    // Enter elements of 1st matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Enter elements of 2nd matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1); // Note: fixed variable name in text prompt to 'b' for clarity
            scanf("%d", &b[i][j]);
        }
    }

    // Adding two matrices
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", sum[i][j]); // '\t' spaces the numbers out evenly like a grid
        }
        printf("\n"); // Move to the next line after printing a full row
    }

    return 0;
}