#include <stdlib.h>

/**
* create_array - create_array
* @size: input
* @c: input
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *result;

	if (size <= 0)
		return (0);

	result = malloc(sizeof(char) * size);
	if (result == 0)
		return (0);

	while (size > 0)
		result[--size] = c;

	return (result);
}
