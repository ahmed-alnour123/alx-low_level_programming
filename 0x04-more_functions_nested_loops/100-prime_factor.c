#include <stdio.h>
#include <math.h>

/**
* main - main
* Return: 0
*/
int main(void)
{
	int i;
	unsigned long n = 612852475143;
	int root = sqrt(n);

	for (i = root; i > 3; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			return (0);
		}
	}
	return (0);
}
