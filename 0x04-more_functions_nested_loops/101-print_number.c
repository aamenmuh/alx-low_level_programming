#include <stdio.h>
/**
 * print_number - prints the number
 * @n: the para
 */
void print_number(int n)
{
	int i, count;

	int div = n;

	while (div)
	{
		count++;
		div /= 10;
	}
	while (count)
	{
		putchar(n / (10 * count));
		count--;
	}
}
