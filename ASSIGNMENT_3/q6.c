/* Write a C program to check whether a number is Prime number or not.*/
#include <stdio.h>

int main() {
    int num, flag = 1, j = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    while (j < (num / 2) + 1) {
        if (num % j == 0) {
            flag = 0; 
            break;    
        }
        j = j + 1;
    }

    if (flag == 0) {
        printf("%d is not a prime number.\n", num);
    } else {
        printf("%d is a prime number.\n", num);
    }
    return 0; 
}