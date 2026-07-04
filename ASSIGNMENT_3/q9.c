/* Write a C program to check whether a number is Perfect number or not */
#include <stdio.h>

int main() {
    int n, s, i;
    printf("Enter a number to check if it's Perfect: ");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            s = s + i;
        }
    }

    if (s == n) {
        printf("Given Number %d is Perfect Number.\n", n);
    } 
    else {
        printf("Given Number %d is Not a Perfect Number.\n", n);
    }

    return 0; 
}