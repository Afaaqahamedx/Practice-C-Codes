#include<stdio.h>
/*
int main()
{
    int arr[5];
    float avg , sum = 0;
    printf("Enter the array elements: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<5; j++){
        sum += arr[j];
    }
    avg = sum / 5;
    printf("\nThe average of the array elements vare: %.2f",avg);
}*/

int main()
{
    int arr[5], *ptr;
    float avg , sum = 0;
    ptr = &arr;
    printf("Enter the array elements: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",(ptr+i));
    }

    for(int j=0; j<5; j++){
        sum += *(ptr+j);
    }
    avg = sum / 5;
    printf("\nThe average of the array elements vare: %.2f",avg);
}