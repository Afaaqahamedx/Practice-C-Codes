//          even odd in seperate array

#include<stdio.h>
int main()
{
    int arr[50], odd[50], even[50], evencnt = 0, oddcnt = 0, size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("\nEnter the array elements: ");
    for(int i=0
        ; i<size; i++)
    {

        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {

            even[evencnt] = arr[i];
            evencnt++;

        }
        else
        {
            odd[oddcnt] = arr[i];
            oddcnt++;
        }
    }


    printf("\nThe Even numbers in array are: ");
    for(int i=0; i<evencnt; i++)
    {
        printf("%d ",even[i]);

    }

    printf("\nThe odd numbers in array are: ");
    for(int i=0; i<oddcnt; i++)
    {
        printf("%d ",odd[i]);

    }





}
