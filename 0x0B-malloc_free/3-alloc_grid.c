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
	int failed;
	int **result;

	failed = 0;
	result = malloc(sizeof(int *) * height);
	if (result == 0 || (width + height == 0))
		return (0);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == 0)
		{
			failed = 1;
			break;
		}
		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}

	if (!failed)
		return (result);

	for (i = 0; i < height; i++)
	{
		free(result[i]);
	}
	free(result);
	return (0);
}
