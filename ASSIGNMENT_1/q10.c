/* Write a C program to calculate the area of a triangle using Heron's Formula */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double s, area;
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    
    printf("Enter the length of side c: ");
    scanf("%lf", &c);

    // the sum of any two sides must be greater than the third side
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
                s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("\nSemi-perimeter (s) = %.2lf\n", s);
        printf("Area of the triangle = %.2lf sq. units\n", area);
        
    } else {
        printf("\nError: The given sides do not form a valid triangle.\n");
    }

    return 0;
}