/*Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and
%) - switch case*/

#include <stdio.h>

int main() {
    int num1, num2, result;
    int choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Select an Arithmetic Operation ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("\n"); 
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
            
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
            
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
            
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Cannot perform modulo when second number is zero.\n");
            }
            break;
            
        default:
            printf("Invalid choice! Please select a number between 1 and 5.\n");
    }

    return 0;
}