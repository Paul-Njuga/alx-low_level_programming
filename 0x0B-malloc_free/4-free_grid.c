#include "main.h"

/**
 * free_grid - returns pointer to a 2d array of int
 * @grid: grid to free
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	/* Free malloc'd pointers in column */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* Free malloc'd array of pointers in row */
	free(grid);
}
