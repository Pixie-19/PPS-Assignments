// Write a C program to copy one string to another using pointers.

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char source[MAX_SIZE];
    char destination[MAX_SIZE];

    // Pointers pointing to the start of each string
    char *strStart = source;
    char *strCopy = destination;

    // 1. Get string input from user
    printf("Enter a string: ");
    // Reads a line of text, including spaces, up until the Enter key (\n)
    fgets(source, sizeof(source), stdin); 

    // 2. Copy the string using pointers
    // This loop checks if the character inside strStart is NOT the null terminator
    while (*strStart != '\0') {
        *strCopy = *strStart; // Copy the character from source to destination
        strStart++;           // Move source pointer to the next character
        strCopy++;            // Move destination pointer to the next character
    }

    // 3. CRITICAL STEP: Add the null terminator to the end of the new string
    *strCopy = '\0';

    // 4. Print results
    printf("\nOriginal String: %s", source);
    printf("Copied String:   %s", destination);

    return 0;
}