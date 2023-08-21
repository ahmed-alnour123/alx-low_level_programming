#include "main.h"

/**
* print_rev - print string in reverse
* @s: input string
*/
void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
