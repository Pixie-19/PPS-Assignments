/* Inverted Continuous Countdown Triangle 
10  9   8   7
6   5   4
3   2   
1
*/
#include <stdio.h>

int main() {
    int i, j, count = 10;
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count--);
        }
        printf("\n");
    }
    return 0;
}