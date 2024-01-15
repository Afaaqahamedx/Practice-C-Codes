#include <stdio.h>
#include <string.h>
int func();
int main()
{
    FILE *read, *write;
    char str[5][20], t[20];
    int i, j;

    read = fopen("data4.txt", "r");
    write = fopen("result4.txt", "w");

    // printf("Enter any string: \n");
    for (i = 0; i < 5; i++)
    {
        fscanf(read, "%s", str[i]);
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (strcmp(str[j - 1], str[j]) > 0)
            {
                strcpy(t, str[j - 1]);
                strcpy(str[j - 1], str[j]);
                strcpy(str[j], t);
            }
        }
    }



    printf("\nStrings in Lexicological order in result4 txt file!\n");
    for (i = 0; i < 5; i++)
    {
        fprintf(write, "%s\n", str[i]);
    }
    printf("\n");
    return 0;
}