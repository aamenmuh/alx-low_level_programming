#include <stdlib.h>
/**
 * get_endianness - checks endiannes by checking how 1 is stored
 *
 * Return: 1 -> little; 0 -> big
 */
int get_endianness(void)
{
	unsigned long int n;
	unsigned long int *firstBit;

	n = 1ul;
	firstBit = (unsigned long int *)NULL;
	firstBit = &n;
	return (*(int *)firstBit) /* type Punning */;
}
