#include "main.h"
#include <stdlib.h>

/**
 * **free_grid - Creates a two dimentional array
 * grid: Pointer to the array
 * @height: The height
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
