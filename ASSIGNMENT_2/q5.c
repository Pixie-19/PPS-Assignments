/* Write a C Program for following using if-else statements.
An electric distribution companies arranges its domestic consumer as follows:
Consumption in UnitsRate of charge
0 - 200 Rs. 0.50 per unit
201 - 400 Rs. 100 plus Rs. 0.65 per unit excess to 200
400 - 600 Rs. 250 plus Rs. 0.80 per unit excess to 400
Above 600 Rs. 425 plus Rs. 1.25 per unit excess to 600
Print the amount to be paid by the consumer. */

#include <stdio.h>

int main() {
    double units, total_bill;

    printf("Enter the total units consumed: ");
    scanf("%lf", &units);

    if (units < 0) {
        printf("Error: Units consumed cannot be negative.\n");
        return 1;
    } 
    else if (units <= 200) {
        total_bill = units * 0.50;
    } 
    else if (units <= 400) {
        total_bill = 100.0 + ((units - 200) * 0.65);
    } 
    else if (units <= 600) {
        total_bill = 250.0 + ((units - 400) * 0.80);
    } 
    else {
        total_bill = 425.0 + ((units - 600) * 1.25);
    }

    printf("        ELECTRICITY BILL INVOICE        \n");
    printf("Total Units Consumed : %.2lf units\n", units);
    printf("----------------------------------------\n");
    printf("TOTAL AMOUNT DUE     : Rs. %.2lf\n", total_bill);
    return 0;
}