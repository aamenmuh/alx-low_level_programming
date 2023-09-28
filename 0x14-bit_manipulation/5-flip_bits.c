#include <stdio.h>
/**
 * flip_bits - gets numbetr of bits required to turn n to m.
 * @n: first num
 * @m: second num
 *
 * Return: returns number of flip-required bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int counter;

	counter = 0;
	value = n ^ m;
	while (value != 0)
	{
		if ((value & 1ul) == 1)
			counter++;
		value >>= 1;
	}
	return (counter);
}
