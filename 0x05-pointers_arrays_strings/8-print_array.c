#include <stdio.h>

/**
* print_array - print_array
* @a: array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	int i, len;

	if (n <= 0)
	{
		i = 0;
		for (len = 0; *(a + i) != '\0'; i++)
		{
			len++;
		}
		n = len;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("%d\n", a[i]);
}
