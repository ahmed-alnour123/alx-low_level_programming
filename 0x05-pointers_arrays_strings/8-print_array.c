#include <stdio.h>

/**
* print_array - print_array
* @a: array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("%d\n", a[i]);
}
