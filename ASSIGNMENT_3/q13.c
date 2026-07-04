/* Sum of the Harmonic Series */
#include <stdio.h>

int main() {
    int n, i;
    double y = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        y = y + (1.0 / i);
    }
    printf("The value of the series y = %.4lf\n", y);
    return 0;
}