#include <stdlib.h>
/**
 * array_range - fills arr with vals
 * @min: min val
 * @max: max val
 *
 * Return: the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (arr);
	for (i = 0; i < size; i++)
		arr[i] = i + min;
	return (arr);
}
