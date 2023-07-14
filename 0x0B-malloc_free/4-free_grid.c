#include <stdlib.h>
#include "main.h"

/**
 * free_grid - will frees the memory allocate
 * @grid: grid that needs to be free
 * @height: grid's height
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
