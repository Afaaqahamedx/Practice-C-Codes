
//   unique elements in array

#include <stdio.h>

int main()
{
    int arr[50], size, count, freq[50], *ptr;
    printf("Enter the array size: ");
    scanf("%d", &size);

    ptr = &arr;

    printf("\nEnter the array elements: ");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (*(ptr + i) == *(ptr + j))
            {
                count++;
                freq[i] = 0;
            }
            if (freq[i] != count)
            {
                freq[i] = count;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
            printf("%d ", *(ptr + i));
        }
    }
}
