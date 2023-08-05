#include <stdio.h>
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: position to be found
 *
 * Return: returns bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	int currentBit;

	size = sizeof(unsigned long int) * 8;
	if (index > size - 1)
		return (-1);
	currentBit = (n >> index) & (1ul);
	return (currentBit);
}
