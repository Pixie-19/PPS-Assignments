//  Write a C Program to swap two given numbers using call by reference

#include <stdio.h>

// Function to swap values using integer pointers
void swap(int *ptr1, int *ptr2) {
    int temp;

    temp = *ptr1;  // Copy the value at ptr1 into temp
    *ptr1 = *ptr2; // Copy the value at ptr2 into ptr1
    *ptr2 = temp;  // Copy the value from temp into ptr2
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number (num1): ");
    scanf("%d", &num1);
    printf("Enter second number (num2): ");
    scanf("%d", &num2);

    printf("\n--- Before Swapping ---\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Passing the addresses of num1 and num2 (Call by Reference)
    swap(&num1, &num2);

    printf("\n--- After Swapping ---\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}