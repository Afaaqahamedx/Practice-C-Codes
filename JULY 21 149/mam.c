#include <stdio.h>
int main()
{
    int arr[6] = {13, 8, 6, 5, 2, 4};
    int result[6], sum[6];
    printf("\nOriginal Array: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = 5; i >= 0; i--)
    {
        result[i] = arr[i];
        printf("%d ", result[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        sum[i] = arr[i] + result[6 - i - 1];
    }

    printf("\n");
    printf("\nSum of reversed and og array elements: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", sum[i]);
    }
}
