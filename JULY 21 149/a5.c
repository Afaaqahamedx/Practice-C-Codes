#include <stdio.h>

int main()
{
    long long int amount;
    int n100 = 0, n50 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    printf("Enter the amount: ");
    scanf("%lld", &amount);

    if(amount >= 100)
    {
        n100 = amount/100;
        amount -= n100 * 100;
    }
    if(amount >= 50)
    {
        n50 = amount/50;
        amount -= n50 * 50;
    }
    if(amount >= 10)
    {
        n10 = amount/10;
        amount -= n10 * 10;
    }
    if(amount >= 5)
    {
        n5 = amount/5;
        amount -= n5 * 5;
    }
    if(amount >= 2)
    {
        n2 = amount /2;
        amount -= n2 * 2;
    }
    if(amount >= 1)
    {
        n1 = amount;
    }

    printf("\nNumber of 100rs notes: %d", n100);
    printf("\nNumber of 50rs notes: %d", n50);
    printf("\nNumber of 10rs notes: %d", n10);
    printf("\nNumber of 5rs notes: %d", n5);
    printf("\nNumber of 2rs notes: %d", n2);
    printf("\nNumber of 1rs notes: %d", n1);
}
