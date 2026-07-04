/* C Program to Calculate Sum of Positive and Negative Elements in an Array */
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int posSum = 0, negSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            posSum += arr[i];
        else if(arr[i] < 0)
            negSum += arr[i];
    }

    printf("Sum of positive elements = %d\n", posSum);
    printf("Sum of negative elements = %d\n", negSum);

    return 0;
}