#include <stdio.h>
/**
 * print_binary - prints binary representation
 *
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int size, i;
	unsigned long int oneMask;
	int foundNonZero;

	oneMask = 1ul;
	foundNonZero = 0;
	size = sizeof(unsigned long int) * 8;
	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = size - 1; i > -1; i--)
	{
		oneMask = 1ul << i;
		if ((n & oneMask) != 0)
		{
			foundNonZero = 1;
			printf("1");
		}
		else if (foundNonZero)
			printf("0");
	}
}
