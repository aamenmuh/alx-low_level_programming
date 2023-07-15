#include <stdlib.h>
/**
 * malloc_checked - allocates with malloc
 * @b: the size
 *
 * Return: depesds
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if(ptr == NULL)
	{
		exit(98);
	}
	return ptr;
}
