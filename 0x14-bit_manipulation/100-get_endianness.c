#include <stdlib.h>
/**
 * get_endianness - checks endiannes by checking how 1 is stored
 *
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned long int n;
	unsigned long int *firstBit;

	n = 1ul;
	firstBit = (long unsigned int *)NULL;
	firstBit = &n;
	return (*(int *)firstBit);
}
