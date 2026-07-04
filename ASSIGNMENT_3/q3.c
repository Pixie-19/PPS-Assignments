/* Write a C program to find all factors of a number. */
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    printf("\nThe factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}