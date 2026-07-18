// Write a C program to count the frequency of each character in a string
#include <stdio.h>

int main() {
    // STEP 1: Input a string with space.
    char str[150];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets if present
    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] == '\n') {
            str[k] = '\0';
            break;
        }
    }

    // STEP 2: Find the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // STEP 3: Start a for loop [i] from 0 to length of string
    for (int i = 0; i < len; i++) {
        
        // STEP 4: Initialize a counter=1
        int counter = 1;

        // STEP 5: If string is not null (meaning it hasn't been wiped out as a duplicate yet)
        if (str[i] != '\0') {
            
            // Start a loop [j] from i+1 to length of string
            for (int j = i + 1; j < len; j++) {
                
                // STEP 6: If match found, increment counter and set duplicate position to null
                if (str[i] == str[j]) {
                    counter++;
                    str[j] = '\0'; 
                }
            }

            // STEP 7: Print the character and frequency outside the inner loop, inside the if statement
            printf("'%c' occurs %d time(s)\n", str[i], counter);
        }
    }

    return 0;
}