#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it
 * @size: the size of the array
 * @c: the initialized character
 *
 * Return: returns Null if size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < size; i++)
		array[i] = c;

	return (array);
}
