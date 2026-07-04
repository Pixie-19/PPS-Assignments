/* Sum of the Algebraic Fractional Series*/
#include <stdio.h>

int main() {
    int n, i, j;
    double y = 0.0, fact;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        fact = 1.0;
        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }
        y = y + ((double)(i * i) / fact);
    }
    printf("The total value of the series y = %.6lf\n", y);

    return 0;
}