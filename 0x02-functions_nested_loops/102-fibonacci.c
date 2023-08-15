#include <stdio.h>

/**
 * fib - fib sequence
 * @n: input
 * @fib_nums: cache array
 * Return: int
 */
long fib(int n, long fib_nums[])
{
	if (n == 0 || n == 1)
		return (1);
	return (fib_nums[n - 1] + fib_nums[n - 2]);
}

/**
* main - main
* Return: 0
*/
int main(void)
{
	int i, n;
	long f;
	long fib_nums[51];

	n = 50;
	fib_nums[0] = 1;
	fib_nums[1] = 1;
	fib_nums[2] = 2;

	for (i = 1; i < n; i++)
	{
		f = fib(i, fib_nums);
		if (f > 2)
			fib_nums[i] = f;
		printf("%ld, ", f);
	}
		printf("%ld\n", fib(n, fib_nums));
	return (0);
}
