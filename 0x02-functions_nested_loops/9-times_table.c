#include "main.h"
#include <stdio.h>

/**
 * times_table - times_table
 */
void times_table(void)
{
	int i, j, mult, first_digit, second_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			first_digit = mult % 10;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (mult <= 9)
					_putchar(' ');
			}

			if (mult > 9)
			{
				mult /= 10;
				second_digit = mult % 10;
				_putchar('0' + second_digit);
				_putchar('0' + first_digit);
			}
			else
			{
				_putchar('0' + first_digit);
			}
		}
		_putchar('\n');
	}
}
