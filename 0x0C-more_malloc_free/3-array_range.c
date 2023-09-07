/**
* array_range - array_range
* @min: input
* @max: input
* Return: array
*/
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (0);

	result = malloc((max - min + 1) * sizeof(int));
	if (result == 0)
		return (0);

	for (i = min; i <= max; i++)
		result[i - min] = i;

	return (result);
}
