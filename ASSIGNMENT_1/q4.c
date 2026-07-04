/* Write a C program to swap two numbers. (with and without third variable) */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    temp = a; 
    a = b;    
    b = temp; 

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


/* without using third variable */
/* #include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
} */