// C program to calculate factorial of a number using a function and also calculate nCr
#include <stdio.h>

// STEP 1: Declare a function ‘fact’ with input parameter (n) before main function
unsigned long long fact(int n);

int main() {
    int n, r;
    unsigned long long factorial_n, ncr;

    // STEP 2: In main, take the number(n) as user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // STEP 3: Call the function and pass the input parameter (n)
    factorial_n = fact(n);

    // STEP 8: Print the value of ‘factorial’ in the main function
    printf("Factorial of %d = %llu\n", n, factorial_n);

    // Hint: Take another user input r to find nCr
    printf("\nEnter the value of r (for nCr): ");
    scanf("%d", &r);

    // Validation to make sure r is not greater than n or negative
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! n must be >= r and both must be non-negative.\n");
    } else {
        // Hint: Call the ‘fact’ function using the nCr equation
        ncr = fact(n) / (fact(r) * fact(n - r));
        printf("%dC%d = %llu\n", n, r, ncr);
    }

    return 0;
}

// Function definition for calculating factorial
unsigned long long fact(int n) {
    // STEP 4: Initialize a variable ‘f’ with 1
    unsigned long long f = 1;

    // STEP 5 & 6: Start a for loop from i=1 to the number(n) and multiply
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    // STEP 7: Return the final value of ‘f’ to the main function
    return f;
}