#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid: Return a pointer to 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return NULL;

	array = (int **)malloc(height * sizeof(int *) + height * width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}