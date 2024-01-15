#include <stdio.h>

int main()
{
    int arr[50], size, temp;

    int *ptr[50];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &arr[i];
    }

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*ptr[i] > *ptr[j])
            {
                temp = *ptr[j];
                *ptr[j] = *ptr[i];
                *ptr[i] = temp;
            }
        }
    }
    printf("\nArray in sorted order is:");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", *ptr[i]);
    }
}
