#include <stdio.h>

int main()
{
    int arr[3][3];
    int row1 = 0, row2 = 0, row3 = 0;
    printf("\nEnter the  first matrix elements: \n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    printf("\n ----Sorted Order---- \n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    int max = 0, count, index = -1;
    for (int r = 0; r < 3; r++)
    {
        count = 0;
        for (int c = 0; c < 3; c++)
        {
            if (arr[r][c] == 1)
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            index = r;
        }
    }

    printf("\n row %d has most of ones in it!", (index + 1));
}
