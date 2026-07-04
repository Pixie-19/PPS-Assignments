/*Write a C program to check whether an alphabet is vowel or consonant using switch case*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch); 

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("'%c' is a Vowel.\n", ch);
                break;
            default:
                printf("'%c' is a Consonant.\n", ch);
        }
        
    } else {
        printf("Error: '%c' is not a valid alphabet.\n", ch);
    }

    return 0;
}