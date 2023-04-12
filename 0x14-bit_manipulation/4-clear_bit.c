#include <stdio.h>
/**
 * clear_bit - sets the bit to 0
 * @n: number in denary
 * @index: position to set
 *
 * Return: returns the new number
 */
int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index > 33)
		return (-1);

	*n &= (0 << index);
	return (1);
}
