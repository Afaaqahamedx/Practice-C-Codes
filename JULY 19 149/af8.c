#include <stdio.h>

// to print star ulta pyramid

void main()
{
    int i, n, k = 1, j;
    
    printf("Enter the size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            printf(" ");
        }
        for (j = n; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}