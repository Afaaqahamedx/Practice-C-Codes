#include <stdio.h>

//Printing reverse j values

void main()
{
    int i, n, k, j;
    printf("Enter the size of the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j=i, k=1; j < n; j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}