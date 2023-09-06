#include <stdlib.h>
/**
* free_grid - free_grid
* @grid: input
* @height: input
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
