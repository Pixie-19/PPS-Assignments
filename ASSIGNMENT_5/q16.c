/* C Program for Left Rotate and Right Rotate an Array */
#include <stdio.h>

int main()
{
    int arr[100], n, i, temp, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Left Rotate");
    printf("\n2. Right Rotate");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        temp = arr[0];

        for(i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }
    else if(choice == 2)
    {
        temp = arr[n - 1];

        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}