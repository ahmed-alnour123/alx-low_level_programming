#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	for (int i = 48; i <= 48 + 9; i++)
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
