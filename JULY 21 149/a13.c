
#include <stdio.h>
int main()
{
    int c, sum = 0;
    printf("Enter the length: ");
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        for (int j = 2; j < c; j++)
        {
            if (i % j == 0)
            {
                printf("%d", i);
            }
        }
    }
}
