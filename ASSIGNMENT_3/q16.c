/*  Taylor series expansion for cos(x)*/
#include <stdio.h>
#include <math.h>

int main() {
    double x, x_radians, term, y = 1.0; 
    int n, i, j, sign = -1;          
    printf("Enter the value of x (in degrees): ");
    scanf("%lf", &x);
    printf("Enter the limit n (an even number, e.g., 6 or 8): ");
    scanf("%d", &n);
    x_radians = x * (3.14/ 180.0);
    for (i = 2; i <= n; i += 2) {
        double fact = 1.0;
        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }
        term = pow(x_radians, i) / fact;
        y = y + (sign * term);
        sign = -sign;
    }

    printf("\nCalculated cos(%.2lf) using series = %.4lf\n", x, y);
    printf("Standard math library cos(%.2lf)      = %.4lf\n", x, cos(x_radians));

    return 0;
}