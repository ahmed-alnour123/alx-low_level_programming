#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	last = last < 0 ? -last : last;
	_putchar('0' + last);
	return (last);
}
