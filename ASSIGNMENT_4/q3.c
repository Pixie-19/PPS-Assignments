/* Write a C program to print the following pattern:
        1
      2 3
    3 4 5
  4 5 6 7 (Up to n numbers of row) */

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        // 1. Loop for spaces: prints spaces to right-align the numbers
        for (int space = 1; space <= n - i; space++) {
            printf("  "); // Two spaces to align with the numbers
        }
        
        // 2. Loop for numbers: starts at 'i' and prints 'i' numbers total
        int num = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        
        // Move to the next line after completing the row
        printf("\n");
    }
    return 0;
}