#include "main.h"

/**
* puts2 - prints every other character of string
* @str: input
*/
void puts2(char *str)
{
	int is_even;

	is_even = 0;
	for (; *str != '\0'; str++)
	{
		if (is_even++ % 2 != 0)
			continue;
		_putchar(*str);
	}
	_putchar('\n');

}
