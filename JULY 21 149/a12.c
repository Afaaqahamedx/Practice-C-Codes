#include <stdio.h>
int main()
{
    int c, cube = 0;
    printf("Enter the number: ");
    scanf("%d", &c);
    cube = c * c * c;
    printf("The cube of the integer is: %d", cube);
}