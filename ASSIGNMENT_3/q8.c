/*Write a C program to check whether a number is Armstrong number or not.*/
#include <stdio.h>

int main() {
    int sum, temp, num, remainder;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);
    sum = 0;
    temp = num;
    while (num > 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }
    if (sum == temp) {
        printf("%d is an Armstrong Number.\n", temp);
    } else {
        printf("%d is NOT an Armstrong Number.\n", temp);
    }
    return 0; 
}