#include <stdlib.h>
/**
* malloc_checked - malloc_checked
* @b: input
* Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == 0)
		exit(98);

	return (result);
}
