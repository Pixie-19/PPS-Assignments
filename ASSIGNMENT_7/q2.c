// This program counts the number of vowels and consonants in a given string.
#include <stdio.h>
#include <string.h>

int main() {
    // STEP 1: Take input in character array
    char str[150];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // STEP 2: Initialize two variables: vowel=0 & consonant=0
    int vowels = 0;
    int consonants = 0;

    // STEP 3: Find the length of the string
    int length = strlen(str);

    // Clean up the trailing newline character from fgets if it exists
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; 
    }

    // STEP 4: Run a loop from start till end of string
    for (int i = 0; i < length; i++) {
        char ch = str[i];

        // STEP 5: Check if the current character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Else check if it's a consonant (must be an alphabet letter, but not a vowel)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    // Print the results
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}