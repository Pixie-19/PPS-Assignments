// C program to add two matrices using a function
#include <stdio.h>

// STEP 1: Declare a function ‘matrixadd’ with input parameters
void matrixadd(int [][10], int[][10], int[][10], int, int);

int main() {
    // STEP 2: In main, define 3 matrices and variables
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], row, col, i, j;

    printf("Enter the number of rows (max 10): ");
    scanf("%d", &row);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &col);

    if (row > 10 || col > 10) {
        printf("Error: Matrices cannot exceed 10x10.\n");
        return 1;
    }

    // Take user input for the first matrix (Showing 1-based indexing to user)
    printf("\nEnter the elements of the 1st matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            // We use i+1 and j+1 here so it displays [1][1] instead of [0][0]
            printf("matrix1[%d][%d] = ", i + 1, j + 1); 
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Take user input for the second matrix
    printf("\nEnter the elements of the 2nd matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("matrix2[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Call the function
    matrixadd(matrix1, matrix2, matrix3, row, col);

    // Print the final 2D array
    printf("\nThe sum of the two matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void matrixadd(int matrix1[][10], int matrix2[][10], int matrix3[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}