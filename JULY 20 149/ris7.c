// to change character cases

#include <stdio.h>
#include <string.h>

int main()
{
    char string[500], result[500];
    int len;
    printf("Enter the string: ");
    scanf("%s", string);

    len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            result[i] = string[i] + 32;
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            result[i] = string[i] - 32;
        }
    }
    printf("\nResult string: %s", result);
}
