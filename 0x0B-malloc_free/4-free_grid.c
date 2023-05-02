#include "main.h"
#include <stdlib.h>

/**
 * free_grid - output allocated grids
 * @grid: an integer
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
		free(grid[num]);
	free(grid);
}
