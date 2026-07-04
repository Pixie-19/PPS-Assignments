/*Write a C program to convert binary to decimal number and decimal to binary number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    long long binary, tempBinary;
    int decimal, tempDecimal;
    int remainder, base = 1, decimalResult = 0;
    int binaryArray[32], i = 0;

    printf("     NUMBER SYSTEM CONVERTER      \n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number (e.g., 1010): ");
            scanf("%lld", &binary);
            
            tempBinary = binary;
            while (tempBinary > 0) {
                remainder = tempBinary % 10;
                decimalResult = decimalResult + (remainder * base);
                base = base * 2;     
                tempBinary = tempBinary / 10;
            }
            
            printf("Decimal equivalent of %lld is: %d\n", binary, decimalResult);
            break;

        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            
            tempDecimal = decimal;
            i = 0;

            if (tempDecimal == 0) {
                printf("Binary equivalent: 0\n");
                break;
            }

            while (tempDecimal > 0) {
                binaryArray[i] = tempDecimal % 2;
                tempDecimal = tempDecimal / 2;
                i++;
            }

            printf("Binary equivalent of %d is: ", decimal);
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binaryArray[j]);
            }
            printf("\n");
            break;

        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}