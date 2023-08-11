#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 48; i <= 48 + 9; i++)
	{
		for (j = i; j <= 48 + 9; j++)
		{
			for (k = j; k <= 48 + 9; k++)
			{
				if (i == j || j == k || i == k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
