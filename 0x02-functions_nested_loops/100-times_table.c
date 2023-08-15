#include "main.h"
/**
 * print_num - prints number
 * @i: number
 * @is_first: is_first
 */
void print_num(int i, int is_first)
{
	int first, second, third;

	first = i % 10;
	if (i > 99)
	{
		i /= 10;
		second = i % 10;
		i /= 10;
		third = i % 10;
		if (is_first)
			_putchar(' ');
		_putchar('0' + third);
		_putchar('0' + second);
		_putchar('0' + first);
	}
	else if (i > 9)
	{
		i /= 10;
		second = i % 10;
		if (is_first)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + second);
		_putchar('0' + first);
	}
	else
	{
		if (is_first)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + first);
	}
}

/**
* print_times_table - prints times table
* @n: input
*/
void print_times_table(int n)
{
	int i, j, mult;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;

			if (j != 0)
			{
				_putchar(',');
			}

			print_num(mult, j != 0);
		}
		_putchar('\n');
	}

}
