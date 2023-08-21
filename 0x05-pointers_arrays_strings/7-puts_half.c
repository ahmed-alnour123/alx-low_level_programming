#include "main.h"

/**
* puts_half - puts_half
* @str: input
*/
void puts_half(char *str)
{
	int i, len;

	i = 0;
	for (len = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}

	for (i = (len - 1) / 2 + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
