#include "main.h"
#include <stdlib.h>

/**
 * free_grid -fregrid
 * @grid: gri
 * @height: sdkel
 * Rreturn: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

