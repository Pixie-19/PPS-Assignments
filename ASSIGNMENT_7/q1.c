// This program takes a string input from the user and calculates its length by counting the number of characters until it encounters a null character ('\0'). It uses a character array to store the input string and a for loop to iterate through the array to determine its length. The program also handles the trailing newline character that may be added by the fgets function.
#include <stdio.h>

int main() {
    // STEP 1: Take input in character array
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Clean up the trailing newline character added by fgets if it exists
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // STEP 2: Using a for loop, count the number of characters in the array 
    // from 0th position, until a null character ('\0') is found.
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print the final calculated length
    printf("The length of the string is: %d\n", length);

    return 0;
}