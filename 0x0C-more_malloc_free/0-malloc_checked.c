#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - same as malloc
 * @b: size to be passed
 */
void *malloc_checked(unsigned int b)
{
	int *pointer = malloc(b);

	if (pointer == NULL)
		return (3);
	else
		return (pointer);

}
