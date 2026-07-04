/* Write a C program to calculate the value of Y using:
Y(x,n) ={1+x^2 when n=1
={1+x/n when n=2
={1+2x when n=3
={1+nx when n>3 or n<1

Where x and n are user inputs. Do this program using if-else-if statement and switch case statement.*/

#include <stdio.h>

int main() {
    double x, Y;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            Y = 1 + (x * x);
            break;
            
        case 2:
            Y = 1 + (x / n);
            break;
            
        case 3:
            Y = 1 + (2 * x);
            break;
            
        default:
            Y = 1 + (n * x);
            break;
    }
    printf("\nThe calculated value of Y(%.2lf, %d) is: %.4lf\n", x, n, Y);
    return 0;
}