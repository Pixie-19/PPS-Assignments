// This program concatenates two strings entered by the user.
#include <stdio.h>

int main() {
    // STEP 1: Take 2 strings in 2 character arrays as input.
    // Making s1 large enough to hold both strings combined
    char s1[200], s2[100]; 
    int j = 0;
    int i = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    // Remove trailing newline from s1 if present
    for (j = 0; s1[j] != '\0'; j++) {
        if (s1[j] == '\n') {
            s1[j] = '\0';
            break;
        }
    }

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    // Remove trailing newline from s2 if present
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
    }

    // STEP 2: Find length of 1st string and store it in a variable say j.
    for (j = 0; s1[j] != '\0'; j++) {
        // This loop simply counts up to find the end of s1
    }

    // STEP 3 & 4: Run a loop from 0 to the last character of the 2nd string 
    // and append characters at s1[j+i] position.
    for (i = 0; s2[i] != '\0'; i++) {
        s1[j + i] = s2[i];
    }

    // CRITICAL EXTRA STEP: C strings must always end with a null terminator.
    // We add it right at the very end of the newly formed string.
    s1[j + i] = '\0';

    // STEP 5: Print the 1st string
    printf("Concatenated string: %s\n", s1);

    return 0;
}