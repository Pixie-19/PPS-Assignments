/*Write a C program to find maximum between three numbers using nested if-else.*/
#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter third number: ");
    scanf("%d", &num3);
    if (num1 > num2) {
        if (num1 > num3) {
            max = num1;
        } else {
            max = num3; 
        }
    } else {
        if (num2 > num3) {
            max = num2;
        } else {
            max = num3; 
        }
    }
    printf("\nThe maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);
    return 0;
}