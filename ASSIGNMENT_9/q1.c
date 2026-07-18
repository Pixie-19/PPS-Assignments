//  Write a C Program using pointer to find the bigger of two given numbers.

#include <stdio.h>

// Function declaration that accepts two integer pointers
int findBigger(int *ptr1, int *ptr2) {
    // Dereferencing pointers to compare the actual values
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int main() {
    int num1, num2, bigger;

    // Asking user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Passing the addresses of num1 and num2 using the ampersand (&) operator
    bigger = findBigger(&num1, &num2);

    printf("The bigger number is: %d\n", bigger);

    return 0;
}