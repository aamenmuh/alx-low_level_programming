#include <stdio.h>
#define BYTE (8)
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: bit position to be found
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	int currentBit;

	currentBit = 0;
	size = sizeof(unsigned long int) * BYTE;
	if (index > size - 1)
		return (-1);
	currentBit = (n >> index) & (1ul);
	return (currentBit);
}
