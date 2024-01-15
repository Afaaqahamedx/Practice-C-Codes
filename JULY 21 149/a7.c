#include<stdio.h>
int main()
{
    int c1age, c2age;
    char c1g[50],c2g[50];
    printf("Enter the candidate details:---- ");

    printf("\nEnter the first candidate's age and gender: ");
    scanf("%d",&c1age);
    scanf("%s",c1g);

    printf("\nEnter the Second candidate's age and gender: ");
    scanf("%d",&c2age);
    scanf("%s",c1g);


    if(c1age>18)
    {
        printf("\nCandidate one is eligable for voting");
    }
    else
    {
        printf("\nCandidate one is Not eligable");
    }

    if(c2age>18)
    {
        printf("\nCandidate two is eligable for voting");
    }
    else
    {
        printf("\nCandidate two is Not eligable");
    }
}
