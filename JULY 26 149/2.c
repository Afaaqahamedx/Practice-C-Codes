// call by value

/*
#include <stdio.h>
struct a
{
    char name[50];
    int year;
};

struct a func()
{
    struct a n;
    printf("\nEnter name: ");
    scanf("%s", n.name);
    printf("Enter year of admission: ");
    scanf("%d", &n.year);
    return n;
}

int main()
{
    struct a p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = func();
    }

    printf("\n======PRINTING DETAILS=====");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: %s", p[i].name);
        printf("\nEnter year of admission: %d",p[i].year);
        printf("\n");
    }
}
*/

// call by reference



struct a
{
    char name[50];
    int year;
};

struct a func()
{
    struct a m, *ptr;
    ptr = &m;
    printf("\nEnter name: ");
    scanf("%s", &(ptr->name));
    printf("Enter year of admission: ");
    scanf("%d", &(ptr->year));

    return *ptr;
}

int main()
{
    struct a m[5];
    struct a *ptr2;
    ptr2 = &m;
    for (int i = 0; i < 5; i++)
    {
        *(ptr2+i) = func();
    }

    printf("\n======PRINTING DETAILS=====");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name: %s", (ptr2+i)->name);
        printf("\nEnter year of admission: %d",(ptr2+i)->year);
        printf("\n");
    }
}

