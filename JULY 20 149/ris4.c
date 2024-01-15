#include<string.h>
#include<stdio.h>

//maximum occuring string

int main()
{
    char string[500], result;
    int len;
    int count = 0, count2 =0;
    printf("Enter the string: ");
    scanf("%s",&string);

    len = strlen(string);

    for(int i =0 ; i < string[i]; i++)
    {
        for(int j = i ; j < string[j]; j++)
        {
            if(string[i] == string[j+1])
            {
                count++;
                result = string[i];

            }
            else
            {
                count2++;
            }
        }
    }
    printf("The frequency of occurrence: %d", count);
    printf("\nThe most occurred character is: %c",result);
}
