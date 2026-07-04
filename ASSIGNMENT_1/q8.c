/*Write a C program to find all roots of a quadratic equation 𝑎𝑥^2 + 𝑏𝑥 + 𝑐 = 0 for all possible
combination of a, b and c.
A quadratic equation will have two roots which are obtained using the expression
where 𝑏^2 − 4𝑎𝑐 is called discriminate.*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
        return 1; 
    }
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("\nRoots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        root2 = root1;
        
        printf("\nRoots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("\nRoots are imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}