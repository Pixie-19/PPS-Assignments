// This program counts the number of alphabets, digits, and special characters in a given string input by the user.
#include <stdio.h>

int main() {
    // STEP 1: Take input in character array
    char str[150];
    int alphabets = 0;
    int digits = 0;
    int special_chars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // STEP 2: Run a loop from 0 to the last character (until null terminator '\0')
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Skip the newline character added by fgets so it isn't counted as a special character
        if (ch == '\n') {
            continue;
        }

        // STEP 3: Check for uppercase and lowercase letters
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        }
        // STEP 4: Check for 0 to 9 digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // STEP 5: Else increment special_character counter (includes spaces, punctuation, etc.)
        else {
            special_chars++;
        }
    }

    // Print the final counts
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special_chars);

    return 0;
}