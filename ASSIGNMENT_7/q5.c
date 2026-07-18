// This program checks if a given string is a palindrome or not.
#include <stdio.h>

int main() {
    // STEP 1: Take input in character array
    char str[100];
    int len = 0;
    int counter = 0; // Tracks mismatch failures

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // STEP 2: Find the length of the string
    for (len = 0; str[len] != '\0'; len++) {
        // Counting characters until the null terminator
    }

    // STEP 3: Run a loop from 0 to (length_of_string/2)
    for (int i = 0; i < len / 2; i++) {
        // STEP 4 & 5: Compare ith element with (len-i-1)th element.
        // If match fails, increment counter and break.
        if (str[i] != str[len - i - 1]) {
            counter++;
            break;
        }
    }

    // STEP 6: Outside for loop check if counter is 0
    if (counter == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}