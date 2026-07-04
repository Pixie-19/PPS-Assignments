/* Write a C program to print Fibonacci series up to n terms. */

#include <stdio.h>

int main() {
    int a, b, c, n, i;
    a = 0;
    b = 1;
    i = 2; 
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    } else if (n == 1) {
        printf("%d\n", a);
        return 0;
    }
    printf("Fibonacci Series: %d, %d", a, b);
    while (i < n) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
        i = i + 1;
    }
    printf("\n");
    return 0; 
}