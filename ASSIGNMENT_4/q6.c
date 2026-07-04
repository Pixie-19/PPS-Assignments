/* Alphabet Increment Triangle 
A
B C
C D E
D E F G
*/


#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", 'A' + i + j);
        }
        printf("\n");
    }
    return 0;
}