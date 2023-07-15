#include <stdlib.h>
/**
 * _calloc - calloc clone
 * @nmemb: array
 * @size: size per element
 *
 * Return: depoends
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == NULL || size == NULL)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (arr);
	return (arr);
}
