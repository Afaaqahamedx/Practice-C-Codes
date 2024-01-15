// replace space

#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    int len, count = 0;
    char temp = '*';
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = str[i + 1];
        }
    }
    printf("The replaced string is: %s", str);
}
