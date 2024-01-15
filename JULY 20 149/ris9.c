

#include <stdio.h>
#include <string.h>

// largest and the smallest word in str

void main()
{
    char str[500];
    int len;
    char small, larg;
    printf("Enter the str: ");
    scanf("%s", str);
    len = strlen(str);
    char temp = str[0];
    for (int i = 1; i < len; i++)
    {
        if (temp > str[i])
        {
            temp = str[i];
        }
        small = temp;
    }
    for (int i = 1; i < len; i++)
    {
        if (temp < str[i])
        {
            temp = str[i];
        }
        larg = temp;
    }
    printf("\nsmallest char in string: %c", small);
    printf("\nLargest char in string: %c", larg);
}
