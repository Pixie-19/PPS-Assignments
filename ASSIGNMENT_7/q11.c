//Write a C Program to read an array of names and to set them in alphabetical order
#include <stdio.h>
#include <string.h>

#define MAX_NAMES 50
#define MAX_LENGTH 30

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int n, i, j;

    // Ask user for the total number of names
    printf("Enter the number of names: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_NAMES) {
        printf("Invalid number of names.\n");
        return 1;
    }

    // Clear the input buffer to prevent skipping the first name input
    while (getchar() != '\n');

    // Read the names from the user
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        
        // Read string including spaces, but stop at newline
        scanf(" %[^\n]", names[i]); 
    }

    // Sort the names alphabetically using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // If the current name is alphabetically greater than the next name
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j + 1]
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display the sorted list of names
    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
