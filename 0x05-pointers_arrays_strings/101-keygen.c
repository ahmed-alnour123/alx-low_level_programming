#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* get_rand_char - get random character
* Return: character
*/
char get_rand_char(void)
{
	return ((rand() % 26) + 'a');
}

/**
* main - main
* Return: 0
*/
int main(void)
{
	int i, sum, n;
	char c;
	char word[100];

	srand(time(NULL));
	i = 0;
	sum = 0;
	n = 2772;

	while (n > 0)
	{
		c = get_rand_char();
		if (n - c > 'z')
		{
			n -= c;
			sum += c;
			word[i++] = c;
		}
		else
		{
			n -= c;
			sum += c;
			word[i++] = c;

			sum += n;
			word[i++] = n;
			break;
		}
	}

	printf("zzzzzzzzzzzzzzzzzzzzzzX");
	return (0);
}
