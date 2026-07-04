/* Inverted Decreasing Alphabet Grid with Spaces
D   C   B   A
    C   B   A
        B   A
            A
*/
#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 0; i < 4; i++) {
        for (space = 0; space < i; space++) {
            printf("  ");
        }
        for (j = 3 - i; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}