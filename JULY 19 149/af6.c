#include <stdio.h>

//to print floys numbers

void main()
{
    int i, n, k = 1, j;
    printf("Enter the size of the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
}