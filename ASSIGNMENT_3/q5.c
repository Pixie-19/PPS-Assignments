/*Write a C program to find HCF (GCD) and LCM of two numbers.*/
#include <stdio.h>

int main() {
    int n1, n2, gcd = 1, i = 1;
    printf("Enter first number (n1): ");
    scanf("%d", &n1);
    
    printf("Enter second number (n2): ");
    scanf("%d", &n2);
    while (i <= n1 && i <= n2) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
        i++; 
    }
    printf("\nThe HCF (GCD) of %d and %d is: %d\n", n1, n2, gcd);
    return 0; 
}