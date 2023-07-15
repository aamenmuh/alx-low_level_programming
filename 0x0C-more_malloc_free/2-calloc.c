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
	size_t i, fullSize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	fullSize = nmemb * size;
	arr = malloc(fullSize);
	if (arr == NULL)
		return (arr);
	char *ptr = (char *)arr;
	for (i = 0; i < fullSize; i++)
	{
		ptr[i] = 0;
	}
	return (arr);
}
