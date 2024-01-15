int main()
{
    int arr[3][3], arr2[3][3], sum[3][3];
    printf("\nEnter the  first matrix elements: \n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {

            scanf("%d",&arr[r][c]);
        }
    }
    printf("\nEnter the  Second matrix elements: \n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {

            scanf("%d",&arr2[r][c]);
        }
    }

    printf("\n ============Matrix structure===============\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ",arr2[r][c]);
        }
        printf("\n");
    }

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            sum[r][c] = arr[r][c] + arr2[r][c];
        }
        printf("\n");
    }



    printf("\nThe sum matrix is:\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ",sum[r][c]);
        }
        printf("\n");
    }
}
