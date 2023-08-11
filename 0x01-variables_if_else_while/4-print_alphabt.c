#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
