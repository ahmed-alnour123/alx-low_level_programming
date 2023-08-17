#include "main.h"

/**
* print_diagonal - print_diagonal
* @n: input
*/
void print_diagonal(int n)
{
	int i, j;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i + 1 < n)
			_putchar('\n');
	}
	_putchar('\n');
}
