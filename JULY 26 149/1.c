#include <stdio.h>
/*
struct a
{
    char name[50];
    int year;
};

int func(struct a p[]);
int main()
{
    struct a p[5];
    printf("\n======ENTER DETAILS=====");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEter name: ");
        scanf("%s", p[i].name);
        printf("ENter year of admission: ");
        scanf("%d", &p[i].year);
        printf("\n");
    }
    func(p);
}

int func(struct a n[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s", n[i].name);
        printf("\nYear of adm: %d", n[i].year);
        printf("\n");
    }
}
*/

struct a
{
    char name[50];
    int year;
};

int func(struct a *n);
int main()
{
    struct a p[5];
    printf("\n======ENTER DETAILS=====");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEter name: ");
        scanf("%s", p[i].name);
        printf("ENter year of admission: ");
        scanf("%d", &p[i].year);
        printf("\n");
    }
    func(&p);
}

int func(struct a *n)
{
    printf("\n========Printing Details========");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s", (n+i)->name);
        printf("\nYear of adm: %d", (n+i)->year);
        printf("\n");
    }
}
