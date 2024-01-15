#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice, year, num, even,odd;
    int arr[5] = {0, -1, 3, -8,-9};

    int arr1[5] = {0, 7, 2, 28, 8};



    printf("enter 1 to check number of positive and negative numbers");
    printf("\nenter 2 to check number of even and odd numbers");
    printf("\nenter 3 to check leap year");

    printf("\nEnter your choice: ");

    scanf("%d",&choice);

    switch (choice)
    {

    case 2 :
        for(int i=0; i<5; i++)
        {
            if(arr[i]%2==0 || arr[i] == 0)
            {
                printf("\n%d is even",arr[i]);
            }
            else
            {
                printf("\n%d is odd",arr[i]);
            }
        }
        break;

    case 1:
        for(int i=0; i<5; i++)
        {
            if(arr[i]>0)
            {
                printf("\n%d is a Positive number",arr[i]);
            }
            else
            {
                printf("\n%d is a Negative number",arr[i]);
            }
        }
        break;

    case 3:
        printf("enter the year: ");
        scanf("%d",&year);

        if((year % 400 == 0) || (year % 4 == 0))
        {
            printf("\nLeap year");
        }
        else
        {
            printf("\nNot a leap year");
        }
        break;

    default:
        exit(1);
        break;
    }


}
