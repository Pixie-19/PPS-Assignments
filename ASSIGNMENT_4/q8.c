/* Symmetric Alphabet Bridge 
A      A
AB    BA
ABC  CBA
ABCDDCBA*/
#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }
        for (space = 0; space < 2 * (3 - i); space++) {
            printf("  ");
        }
        for (j = i; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}