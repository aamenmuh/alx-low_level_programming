#include <stdio.h>
/**
 * set_bit - sets bit at index
 * @n: number
 * @index: position to be found
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size - 1)
		return (-1);
	*n |= (1ul << index);
	return (1);
}
