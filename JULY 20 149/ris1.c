#include <stdio.h>
#include <string.h>

void main()
{
    char sent[100];
    int count = 0, count1 = 0, len;
    printf("Enter sentence: ");
    scanf("%[^\n]s", &sent); //[^\n]
    int len = strlen(sent);
    for (int i = 0; i < len; i++)
    {
        if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u' || sent[i] == 'A' || sent[i] == 'E' || sent[i] == 'I' || sent[i] == 'O' || sent[i] == 'U')
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    printf("%d", count);
}
