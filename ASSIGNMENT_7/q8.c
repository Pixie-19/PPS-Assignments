// This program takes a string input from the user and converts all lowercase letters to uppercase and all uppercase letters to lowercase. It uses a character array to store the input string and iterates through each character to perform the conversion based on ASCII values. The final converted string is then printed to the console.
#include <stdio.h>

int main() {
    // STEP 1: Take input in character array
    char str[150];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // STEP 2: Run a loop up to '\0' character
    for (int i = 0; str[i] != '\0'; i++) {
        
        // STEP 3 & 4: Check if characters are lowercase, then subtract 32
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        
        // STEP 5: If the characters are uppercase, add 32
        // Note: 'else if' is used so a character converted above isn't instantly converted back!
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    // Print the converted string
    printf("Converted string: %s", str);

    return 0;
}