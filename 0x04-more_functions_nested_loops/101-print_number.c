#include "main.h"

/**
 * print_int - print_int
 * @n: input
 */
void print_int(int n)
{
	int i;

	for (i = 1000000000; i >= 1; i /= 10)
		if (n / i != 0)
		{
			_putchar((n / i) % 10 + '0');
		}
}

/**
 * print_number - print_number
 * @n: input
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_int(n * -1);
	}
	else
		print_int(n);
}
