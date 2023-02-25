#include <stdio.h>
/**
 * print_number - prints the number
 * @n: the para
 */
void print_number(int n)
{
	int i;

	int div = n;

	while (div)
	{
		putchar(div);
		div /= 10;
	}
}
