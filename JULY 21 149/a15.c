
#include<stdio.h>
int main()
{
    int  c, sum = 0;

    for(int i=100; i<200; i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("\nSum of numbers divisible by nine: %d",sum);
}



