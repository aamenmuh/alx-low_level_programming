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

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (arr);
	return (arr);
}
