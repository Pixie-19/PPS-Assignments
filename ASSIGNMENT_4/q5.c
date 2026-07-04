/* Write a C program to print the following pascal triangle
            1
        1       1
    1       2       1
1       3       3       1 (Up to n numbers of row) */

#include <stdio.h>

int main() {
    int rows, i, space, j;
    int coef = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  "); 
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef); 
        }
        printf("\n");
    }
    return 0;
}