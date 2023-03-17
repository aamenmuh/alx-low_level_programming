#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - same as malloc
 * @b: size to be passed
 *
 * Return: returns pointer to the address
 */
void *malloc_checked(unsigned int b)
{
unsigned int *pointer;

pointer = malloc(b);

if (pointer == NULL)
exit (98);

return (pointer);
}
