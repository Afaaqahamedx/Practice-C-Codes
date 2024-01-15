#include <stdio.h>
int main()
{
    long long int salary, hra, da, gross;
    printf("Enter Ramesh's Salary: ");
    scanf("%lld", &salary);

    hra = (salary / 100) * 40;
    da = (salary / 100) * 20;

    printf("\nRamesh's HRA: %lld", hra);
    printf("\nRamesh's DA: %lld", da);

    gross = salary + hra + da;
    printf("\nRamesh's gross salary: %lld\n", hra);
}
