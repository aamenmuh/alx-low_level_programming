#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - same as malloc
 * @b: size to be passed
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;
	
	pointer = malloc(b);

	if (pointer == NULL)
		return (3);
	return (pointer);

}