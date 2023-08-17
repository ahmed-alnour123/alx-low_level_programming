#include "main.h"

/**
* print_triangle - print_triangle
* @size: input
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');

}
