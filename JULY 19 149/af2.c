#include<stdio.h>

//to print j values right angled triangle

void main()
{
    int i, n, j;
    printf("Enter the size of the number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}