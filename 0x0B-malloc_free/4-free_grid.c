#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory of the 2d array
 * @grid: double pointer to the array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
