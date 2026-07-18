// C program to calculate the power of a number using recursion
#include <stdio.h>

// STEP 1: Declare a recursive function ‘power’ with input parameters (base and exponent)
double power(double base, int exponent);

int main() {
    double base, result;
    int exponent;

    // STEP 2: Take ‘base’ and ‘exponent’ as user inputs in main.
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // STEP 3: Call the recursive function and pass the input parameters
    result = power(base, exponent);

    // STEP 7: Print the value of ‘result’ in main()
    // %.4lf prints the result up to 4 decimal places for negative exponents
    printf("%.4lf raised to the power of %d is: %.4lf\n", base, exponent, result);

    return 0;
}

// Recursive function definition
double power(double base, int exponent) {
    // STEP 4: If the value of exponent is 0 then return 1
    if (exponent == 0) {
        return 1;
    }
    // STEP 5: If the value of exponent is greater than 0
    else if (exponent > 0) {
        return (base * power(base, exponent - 1)); // calling the function recursively
    }
    // STEP 6: If the value of exponent is less than 0
    else {
        // We use -exponent to turn a negative power positive for the recursive call
        return (1.0 / power(base, -exponent)); 
    }
}