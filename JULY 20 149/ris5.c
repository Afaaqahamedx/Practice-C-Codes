// the in a sentence

#include <stdio.h>
#include <string.h>

void main()
{
    char sent[100];
    printf("Enter sentence: ");
    gets(sent);
    int count = 0;

    int len = strlen(sent);

    for (int i = 0; i < len; i++)
    {
        if (sent[i] == 't' && sent[i + 1] == 'h' && sent[i + 2] == 'e')
        {
            count++;
        }
    }
    printf("The count is: %d", count);
}
