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
		putchar(i);
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
