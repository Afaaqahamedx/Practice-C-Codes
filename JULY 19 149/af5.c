#include <stdio.h>

int main()
{
    int n, dumb = 1, space, i, j;
    printf("Enter the Size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (space = 1; space <= n - i; space++)

            printf("  ");

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                dumb = 1;
            else
                dumb = dumb * (i - j + 1) / j;
            printf("%3d ", dumb);   //%3d becoz for aligning
        }
        printf("\n");
    }
    return 0;
}
