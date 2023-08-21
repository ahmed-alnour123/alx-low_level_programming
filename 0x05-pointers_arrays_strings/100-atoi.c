#include <limits.h>

/**
 * is_digit - check if character is digit
 * @c: input
 * Return: boolean
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - convert string to int
 * @s: input string
 * Return: int
 */
int _atoi(char *s)
{
	int sign, num;
	int run, found_number;

	num = 0;
	sign = 1;
	run = 1;
	found_number = 0;

	while (run && *s != '\0')
	{
		if (*s == '-' && found_number == 0)
		{
			sign *= -1;
		}
		else if (is_digit(*s))
		{
			found_number = 1;
			num *= 10;
			if (num > INT_MAX - (*s - '0'))
			{
        return INT_MIN;
			}
			num += *s - '0';
		}
		else
		{
			if (found_number)
			{
				run = 0;
			}
		}
		s++;
	}
	return (num * sign);
}
