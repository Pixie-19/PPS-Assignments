/* program calculates the Taylor series expansion for sin(x) */

#include <stdio.h>
#include <math.h>

int main() {
    double x, x_radians, term, y = 0.0;
    int n, i, sign = 1;
    printf("Enter the value of x (in degrees): ");
    scanf("%lf", &x);
    printf("Enter the limit n (an odd number, e.g., 7 or 9): ");
    scanf("%d", &n);
    x_radians = x * (3.14159265359 / 180.0);
    for (i = 1; i <= n; i += 2) {
        double fact = 1.0;
        for (int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        term = pow(x_radians, i) / fact;
        y = y + (sign * term);
        sign = -sign;
    }

    printf("\nCalculated sin(%.2lf) using series = %.4lf\n", x, y);
    printf("Standard math library sin(%.2lf)      = %.4lf\n", x, sin(x_radians));

    return 0;
}