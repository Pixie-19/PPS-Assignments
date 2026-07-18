// Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

#include <stdio.h>

// 1. Define the structure blueprint for Distance
struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    // 2. Input values for the first distance
    printf("Enter details for First Distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inches: ");
    scanf("%f", &d1.inches);

    // 3. Input values for the second distance
    printf("\nEnter details for Second Distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inches: ");
    scanf("%f", &d2.inches);

    // 4. Add the distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // 5. The "Carry Over" Rule: Convert inches to feet if inches >= 12.0
    while (sum.inches >= 12.0) {
        sum.inches = sum.inches - 12.0;
        sum.feet = sum.feet + 1;
    }

    // 6. Display the result
    printf("\n==============================");
    printf("\n        TOTAL DISTANCE        ");
    printf("\n==============================");
    printf("\nResult: %d feet, %.2f inches\n", sum.feet, sum.inches);

    return 0;
}

