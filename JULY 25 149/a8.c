#include<stdio.h>

int main()
{
    int arr[3][3], arr2[3][3];
    printf("\nEnter the  first matrix elements: \n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {

            scanf("%d",&arr[r][c]);
        }
    }

    printf("\nOriginal Matrix:==\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }


    printf("\nThe transpose of the matrix:\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
           arr2[c][r] = arr[r][c];
        }
    }

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ",arr2[r][c]);
        }
        printf("\n");
    }

}
