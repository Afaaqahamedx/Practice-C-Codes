// replace space by underscore

#include <stdio.h>
#include <string.h>
void main()
{
    char str[500];
    int len, count = 0;
    char temp = '_';
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    printf("The replaced string is: %s",str);
}
