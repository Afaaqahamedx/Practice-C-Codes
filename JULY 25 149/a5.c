#include <stdio.h>
int main()
{
    int arr[3][3], iden = 1;
    printf("\nEnter the matrix elements: ");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {

            scanf("%d", &arr[r][c]);
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (r == c && arr[r][c] != 1)
            {
                iden = 0;
            }

            else if (r != c && arr[r][c] != 0)
            {
                iden = 0;
            }
        }
    }

    if (iden == 1)
    {
        printf("\nThe Matrix is an identity matrix");
    }
    else
    {
        printf("\nThe Matrix is not an Identity matrix");
    }
}
