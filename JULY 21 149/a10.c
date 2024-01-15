#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character / alphabet / digit to check: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        printf("\nAlphabet");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("\nDigit");
    }
    else
    {
        printf("\n Special Charater");
    }
}
