#include <stdio.h>

int main()
{
    int c, sum = 0;
    printf("Enter the size: ");
    scanf("%d", &c);
    printf("Natural numbers are: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", i);
    }

    for (int i = 0; i < c; i++)
    {
        sum += i;
    }

    printf("\nSum of Natural numbers are : %d\n", sum);
}
