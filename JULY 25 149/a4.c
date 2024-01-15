//          smallest element in array

#include <stdio.h>
int main()
{
    int arr[50], size, count, temp = 0, *ptr;
    printf("Enter the array size: ");
    scanf("%d", &size);
    ptr = &arr;
    printf("\nEnter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    temp = *ptr;
    for (int i = 1; i < size; i++)
    {

        if (arr[i] < temp)
        {
            temp = *(ptr + i);
        }
    }
    printf("The smallest number in the array is: %d", temp);
}
