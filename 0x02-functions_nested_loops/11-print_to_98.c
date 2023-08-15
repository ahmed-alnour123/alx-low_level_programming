#include "main.h"

/**
 * print_num - prints number
 * @i: number
 */
void print_num(int i)
{
	int first, second, third;

	first = i % 10;
	if (i > 99)
	{
		i /= 10;
		second = i % 10;
		i /= 10;
		third = i % 10;
		_putchar('0' + third);
		_putchar('0' + second);
		_putchar('0' + first);
	}
	else if (i > 9)
	{
		i /= 10;
		second = i % 10;
		_putchar('0' + second);
		_putchar('0' + first);
	}
	else
	{
		_putchar('0' + first);
	}
}

/**
 * print_to_98 - print_to_98
 * @n: n
 */
void print_to_98(int n)
{
	int i, counter;

	for (counter = n;; counter < 98 ? counter++ : counter--)
	{
		i = counter;
		if (i < 0)
		{
			_putchar('-');
			i *= -1;
		}

		print_num(i);

		if (counter == 98)
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
}
