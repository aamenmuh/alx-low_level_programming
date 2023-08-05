#include <stdlib.h>
/**
 * get_endianness - checks endiannes by checking how 1 is stored
 *
 * Return: 1 if little, 0 if big
 */
int get_endianness()
{
	unsigned long int n;

	n = 1ul;
	return (char)(&n);
}
