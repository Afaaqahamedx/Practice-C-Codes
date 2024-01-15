#include <stdio.h>

int main()
{
    int x, y, z;

    printf("\nLength: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x == y && x == z)
    {
        printf("\nEquilateral triangle\n");
    }
    else if (x == y || x == z || y == x || y == z || z == x || z == y)
    {
        printf("\n Isoceles Trinagle\n");
    }
    else
    {
        printf("\n Scalene Coordinate\n");
    }
}
