#include <stdlib.h>

/**
* alloc_grid - alloc_grid
* @width: input
* @height: inupt
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **result;

	result = malloc(sizeof(int *) * height);
	if (result == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == 0)
			return (0);
		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}

	return (result);
}
