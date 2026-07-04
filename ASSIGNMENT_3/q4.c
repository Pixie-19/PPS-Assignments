/* Write a C program to calculate factorial of a number */
#include <stdio.h>

int main() {
    int n, fact, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } 
    else {
        fact = 1;
        i = 1;
        while (i <= n) {
            fact = fact * i; 
            i = i + 1;       
        }
        printf("Factorial of %d is: %d\n", n, fact);
    }

    return 0;
}