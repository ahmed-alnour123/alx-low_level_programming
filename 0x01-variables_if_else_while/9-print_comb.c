#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;

	for (i = 48; i <= 48 + 9; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
