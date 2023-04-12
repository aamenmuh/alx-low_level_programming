#include <stdio.h>
/**
 * flip_bit - sets the bit to 0
 * @n: number in denary
 * @index: position to set
 *
 * Return: returns the new number
 */
int flip_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);
	*n ^= (1UL << index);
	return (1);
}
