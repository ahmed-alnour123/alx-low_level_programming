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

	for (i = 48; i <= 48 + 9; i++)
	{
		for (j = i; j <= 48 + 9; j++)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
