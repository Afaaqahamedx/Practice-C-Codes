#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *a, int l, int r)
{
	int i;
	if (l == r)
		printf("%s \t", a);
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a + l), (a + i)); // 1 = one   ;   l = yel;
			permute(a, l + 1, r);

			// backtrack
			swap((a + l), (a + i));
		}
	}
}

// Driver code
int main()
{
	char str[52];
	printf("\nEnter string: ");
	scanf("%s", str);
	int n = strlen(str);
	permute(str, 0, n - 1);
	return 0;
}
