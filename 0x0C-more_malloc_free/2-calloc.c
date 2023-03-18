#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc: allocated memory for array
 * @nmemb: number of array elements
 * @size: memory size
 *
 * Return: depends on the input
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointer;

	if(nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);


	if(pointer == NULL)
		return (NULL);

	memset(pointer, 0, nmemb * size);

	return (pointer);
}
