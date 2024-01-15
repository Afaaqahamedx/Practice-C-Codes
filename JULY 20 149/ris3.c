#include<stdio.h>
#include<string.h>

//reverse string


void main()
{
    char string[500], result[500];
    int len;
    printf("Enter the string: ");
    scanf("%s",string);

    len = strlen(string);

    for(int i=0; i<len; i++)
    {
        result[i] = string[len - i - 1];
    }

    printf("\nReversed string: %s",result);
}
