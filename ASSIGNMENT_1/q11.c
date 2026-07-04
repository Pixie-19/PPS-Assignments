/*Write aC program to calculate andprint electricitybillfor consumer@Rs.3.75per unit, given
the following information: previous meter reading and current reading.*/

#include <stdio.h>

int main() {
    double prev_reading, curr_reading, consumption, bill_amount;
    const double RATE = 3.75;

    // Step 1: Two meter readings will be given through the keyboard.
    printf("Enter previous meter reading: ");
    scanf("%lf", &prev_reading);

    printf("Enter current meter reading: ");
    scanf("%lf", &curr_reading);

    // Safety validation check
    if (curr_reading >= prev_reading) {
        
        // Step 2: Total consumption can be calculated by the difference.
        consumption = curr_reading - prev_reading;

        // Step 3: Multiply the calculated difference with 3.75.
        bill_amount = consumption * RATE;

        // Step 4: Print the calculated electricity bill.
        printf("           ELECTRICITY BILL             \n");
        printf("Previous Meter Reading : %.2lf\n", prev_reading);
        printf("Current Meter Reading  : %.2lf\n", curr_reading);
        printf("----------------------------------------\n");
        printf("Total Consumption      : %.2lf units\n", consumption);
        printf("Rate per Unit          : Rs. %.2lf\n", RATE);
        printf("----------------------------------------\n");
        printf("Total Bill Amount      : Rs. %.2lf\n", bill_amount);        
    } else {
        printf("\nError: Current reading cannot be less than previous reading.\n");
    }
    return 0;
}