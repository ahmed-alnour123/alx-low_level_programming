#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;
	for (i = 48; i <= 'z'; i++)
	{
		if (i > 57 && i < 'a')
			continue;
		if (i > 'f')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
