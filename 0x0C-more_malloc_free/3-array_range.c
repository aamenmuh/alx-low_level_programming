#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer, i;

	if(min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * (max - min + 1));

	if(pointer == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++)
		pointer[i - min] = i;

	return (pointer);
}
