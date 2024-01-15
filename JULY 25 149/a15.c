#include <stdio.h>

int main()
{
    int arr[50], size, buy = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 255 && arr[i + 1] < 255 && arr[i + 2] < 255)
        {
            buy = 1;
        }

        else if (arr[i] > 255 && arr[i + 1] > 255 && arr[i + 2] > 255)
        {
            buy = 0;
        }
    }

    printf("\n=========SUGGESTION===========");
    if (buy != 0)
    {
        printf("\nBuy the dip");
    }
    else if (buy == 0)
    {
        printf("\nHold your stocks\n");
    }
}
