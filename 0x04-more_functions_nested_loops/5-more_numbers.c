#include "main.h"

/**
* more_numbers - more_numbers
*/
void more_numbers(void)
{
	int i, j, minus;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9' + 5; i++)
		{
			minus = 0;
			if (i > '9')
			{
				_putchar('1');
				minus = 10;
			}
			_putchar(i - minus);
		}
			_putchar('\n');
	}
}
