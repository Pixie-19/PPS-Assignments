// Write a C program to remove all extra blank spaces from a given string
#include <stdio.h>
#include <string.h>

int main() {
    // STEP 1: Input a string with space.
    char str[150];

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets if present
    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] == '\n') {
            str[k] = '\0';
            break;
        }
    }

    // STEP 2: Find the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // STEP 3: Start a loop [i] from 0 to length of string
    for (int i = 0; i < len; i++) {
        
        // STEP 4: Check if the current character is a space
        if (str[i] == ' ') {
            
            // STEP 5 & 6: Start another loop [j] from i to length of string
            // and replace the space with the next element
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            
            // STEP 7: Decrement the length by 1 inside the if statement
            len--;
            
            // CRITICAL ADDITION: Decrement i as well so we re-check this exact position.
            // If there are multiple spaces in a row (like "   "), this ensures 
            // the next space shifted into this spot doesn't get skipped!
            i--;
        }
    }

    // STEP 8: Print the string without space
    printf("String after removing spaces: %s\n", str);

    return 0;
}