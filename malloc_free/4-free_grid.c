#include <stdlib.h>

/**
 * free_grid - Frees a 2D array (grid) previously created by malloc
 * @grid: Pointer to the 2D array
 * @height: Number of rows in the grid
 *
 * Description: Frees each row of the grid, then frees the grid itself.
 * If grid is NULL, the function does nothing.
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
	{
		return;
	}
	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
