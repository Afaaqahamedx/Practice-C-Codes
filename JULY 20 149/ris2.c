#include <stdio.h>
#include <string.h>

// using count

int main()
{
    FILE *ptr1, *ptr2;
    char sent[100];
    int count = 0, count1 = 0;
    ptr1 = fopen("Textdoc.txt", "r");
    if (ptr1 == NULL)
    {
        printf("File is empty");
    }
    ptr2 = fopen("result.txt", "w");
    if (ptr2 == NULL)
    {
        printf("File is empty");
    }
    fscanf(ptr1, "%[^\n]s", &sent);
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

    printf("The number of vowels are: %d", count);
    fprintf(ptr2, "The number of vowels are: %d", count);
    fclose(ptr1);
    fclose(ptr2);
}
