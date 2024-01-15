#include <stdio.h>

int main()
{
    int i, max, num1, num2, min, hcf = 1, lcm = 1;

    printf("Enter any two numbers to find HCF and lcm: ");
    scanf("%d%d", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;
    max = (num1 > num2) ? num1 : num2;

    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    int m = max;
    while (1)
    {
        if (m % num1 == 0 && m % num2 == 0)
        {

            lcm = m;
            break;
        }
        m += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, lcm);
    return 0;
}