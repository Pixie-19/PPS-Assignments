/* Inverted Decrement Alphabet Triangle with Spaces 
C C C
  B B
    A*/
#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 0; i < 4; i++) {
        
        for (space = 0; space < i; space++) {
            printf("  ");
        }
        
        for (j = 0; j < 4 - i; j++) {
            printf("%c ", 'D' - i);
        }
        printf("\n");
    }
    return 0;
}