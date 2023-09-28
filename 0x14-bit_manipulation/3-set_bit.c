#include <stdio.h>
#define BYTE (8)
/**
 * set_bit - sets bit at index
 * @n: number
 * @index: position to be found
 *
 * Return: 1 -> success; -1 -> failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * BYTE;
	if (index > size - 1)
		return (-1);
	*n |= (1ul << index);
	return (1);
}
