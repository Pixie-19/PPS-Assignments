/* Write a C program to check whether a number is positive, negative or zero using switch case. */

#include <stdio.h>

int main() {
    double num;

    printf("Enter any number: ");
    scanf("%lf", &num);

    // switch(1) means look for whichever case expression evaluates to true (1)
    switch (num > 0) {
        case 1:
            printf("%.2lf is a POSITIVE number.\n", num);
            break;
            
        case 0:
            switch (num < 0) {
                case 1:
                    printf("%.2lf is a NEGATIVE number.\n", num);
                    break;
                case 0:
                    printf("The number is ZERO.\n");
                    break;
            }
            break;
    }
    return 0;
}