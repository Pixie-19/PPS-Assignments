// This program compares two strings entered by the user and checks if they are the same or different.
#include <stdio.h>

int main() {
    // STEP 1: Take 2 strings in 2 character arrays as input.
    char s1[100], s2[100];
    int counter = 0;
    int i = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    // Remove trailing newline from s1 if present
    for (int k = 0; s1[k] != '\0'; k++) {
        if (s1[k] == '\n') {
            s1[k] = '\0';
            break;
        }
    }

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    // Remove trailing newline from s2 if present
    for (int k = 0; s2[k] != '\0'; k++) {
        if (s2[k] == '\n') {
            s2[k] = '\0';
            break;
        }
    }

    // STEP 2: Run a loop up to '\0' character of both strings.
    // The loop keeps running as long as neither string has reached its end.
    while (s1[i] != '\0' || s2[i] != '\0') {
        
        // STEP 3 & 4: Compare each element. If a mismatch is found,
        // increment the counter and break out of the loop.
        if (s1[i] != s2[i]) {
            counter++;
            break;
        }
        i++;
    }

    // STEP 5: Outside loop, check if counter is still 0
    if (counter == 0) {
        printf("Both strings are the same.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}