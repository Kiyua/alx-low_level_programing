#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - func
 *
 * @width: int
 * @height: int
 * Return: 2 dimensional int array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}

	return (arr);
}
