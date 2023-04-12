#include <stdio.h>
/**
 * set_bit: sets the bit to 1
 * @n: number in denary
 * @index: position to set
 *
 * Return: returns the new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);
	
	*n |= (1UL << index);
	return (1);
}
