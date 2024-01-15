#include <stdio.h>

// to print alphabet in pyramid form 

void main()
{
    int i, n, j;
    printf("Enter the size of the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%c ",i+65);
        }
        printf("\n");
    }
}