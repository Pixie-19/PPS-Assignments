// Write a program to add, subtract and multiply two complex numbers using structures to function.

#include <stdio.h>

// 1. Define the structure blueprint for a complex number
struct Complex {
    float real;
    float imag;
};

// Function prototypes
struct Complex add(struct Complex n1, struct Complex n2);
struct Complex subtract(struct Complex n1, struct Complex n2);
struct Complex multiply(struct Complex n1, struct Complex n2);
void printComplex(char *operationName, struct Complex result);

int main() {
    struct Complex num1, num2, result;

    // 2. Input values for the first complex number
    printf("Enter real and imaginary parts of First Complex Number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    // 3. Input values for the second complex number
    printf("\nEnter real and imaginary parts of Second Complex Number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    printf("\n====================================\n");
    printf("              RESULTS               \n");
    printf("====================================\n");

    // 4. Perform math operations using functions
    result = add(num1, num2);
    printComplex("Addition", result);

    result = subtract(num1, num2);
    printComplex("Subtraction", result);

    result = multiply(num1, num2);
    printComplex("Multiplication", result);

    return 0;
}

// 5. Function to add two complex numbers
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

// 6. Function to subtract two complex numbers
struct Complex subtract(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return temp;
}

// 7. Function to multiply two complex numbers
// Formula: (a+bi)(c+di) = (ac - bd) + (ad + bc)i
struct Complex multiply(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    temp.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    return temp;
}

// 8. Helper function to print complex numbers beautifully
void printComplex(char *operationName, struct Complex result) {
    // If imaginary part is negative, it will automatically print with its minus sign
    if (result.imag >= 0) {
        printf("%-15s: %.2f + %.2fi\n", operationName, result.real, result.imag);
    } else {
        printf("%-15s: %.2f %.2fi\n", operationName, result.real, result.imag);
    }
}