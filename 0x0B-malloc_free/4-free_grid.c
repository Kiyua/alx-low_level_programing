#include "main.h"
#include <stdlib.h>

/**
 * free_grid - func
 *
 * @grid: 2 dimensional int array
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
