/* C Program to Find Mean, Variance and Standard Deviation */
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float arr[100], sum = 0, mean, variance = 0, sd;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for(i = 0; i < n; i++)
    {
        variance += pow((arr[i] - mean), 2);
    }

    variance = variance / n;
    sd = sqrt(variance);

    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);
    printf("Standard Deviation = %.2f\n", sd);

    return 0;
}