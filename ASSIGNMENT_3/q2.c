/* Write a C program to check whether a number is palindrome or not */
#include <stdio.h>

int main() {
    int n, number, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    number = n;
    while (n != 0) {
        remainder = n % 10;          
        reverse = reverse * 10 + remainder; 
        n /= 10;                     
    }
    if (number == reverse) {
        printf("\n%d is a Palindrome number.\n", number);
    } else {
        printf("\n%d is NOT a Palindrome number.\n", number);
    }

    return 0;
}