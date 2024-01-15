// fibo

#include <stdio.h>
int main()
{
    int c, n0 = 0, n1 = 1, n3;
    printf("Enter the length: ");
    scanf("%d", &c);
    printf("%d %d ", n0, n1);
    for (int i = 0; i < c - 2; i++)
    {
        n3 = n0 + n1;
        printf("%d ", n3);
        n0 = n1;
        n1 = n3;
    }
}
