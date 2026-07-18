// Write a C program to concatenate two strings using pointers.

#include <stdio.h>

#define MAX_SIZE 200 // Make it large enough to hold both strings combined

int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    // 1. Input the two strings
    printf("Enter first string: ");
    // Reads input and strips the newline character if present
    scanf(" %[^\n]", str1); 

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // Set up our pointers
    char *ptr1 = str1;
    char *ptr2 = str2;

    // 2. Move ptr1 to the end of the first string
    // We stop exactly when ptr1 points to the null terminator '\0'
    while (*ptr1 != '\0') {
        ptr1++;
    }

    // 3. Copy str2 to the end of str1
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2; // Copy character from str2 to str1
        ptr1++;        // Move destination pointer forward
        ptr2++;        // Move source pointer forward
    }

    // 4. CRITICAL STEP: Add the null terminator to finish the new combined string
    *ptr1 = '\0';

    // 5. Print the result
    printf("\nConcatenated string: %s\n", str1);

    return 0;
}