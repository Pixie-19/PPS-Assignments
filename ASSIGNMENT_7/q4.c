// This program takes a string input from the user, reverses it, and prints the reversed string. It uses a character array to store the input string and another array to store the reversed string. The program counts the length of the input string, then iterates through it in reverse order to populate the reversed string array. Finally, it null-terminates the reversed string and prints it.
#include <stdio.h>

int main() {
    // STEP 1: Take input in character array
    char str[100];
    char rev_str[100]; // Array to store the reversed string
    int count = 0;
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // STEP 2: Find the length of the string (count)
    for (count = 0; str[count] != '\0'; count++) {
        // This loop counts characters until the null terminator
    }

    // STEP 3: Initialize a variable j with 1 less than the length of the input string
    j = count - 1;

    // STEP 4: Run a loop from 0 to less than the length of input string
    for (int i = 0; i < count; i++) {
        // STEP 5: At ith position of the reverse array, store the jth positional value
        rev_str[i] = str[j];
        
        // STEP 6: Decrement j by 1 inside the loop
        j--;
    }

    // CRITICAL EXTRA STEP: Always null-terminate strings in C!
    // Since we ran the loop 'count' times, the next empty spot is at index 'count'
    rev_str[count] = '\0';

    // STEP 7: Print the reverse array
    printf("Reversed string: %s\n", rev_str);

    return 0;
}