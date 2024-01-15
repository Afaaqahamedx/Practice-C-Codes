#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20], t[20];
    int i, j;
    printf("Enter any string: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
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
    printf("\nStrings in Lexicological order:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    printf("\n");
    return 0;
}


// using call by refrence
/*
#include <stdio.h>
#include <string.h>
struct a
{
    char str[100];
} m[5];
int func(struct a *ap);
int main()
{
    char t[20];
    int i, j;
    printf("Enter any string: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &m[i].str);
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (strcmp(m[j - 1].str, m[j].str) > 0)
            {
                strcpy(t, m[j - 1].str);
                strcpy(m[j - 1].str, m[j].str);
                strcpy(m[j].str, t);
            }
        }
    }
    func(&m);
}


int func(struct a *ap)
{
    int i;
    printf("\nStrings in Lexicological order:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n",(ap+i)->str);
    }
    printf("\n");
    return 0;
}
*/