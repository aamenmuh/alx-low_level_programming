#include <stdio.h>
/**
 * print_number - prints the number
 * @n: the para
 */
void print_number(int n)
{
	int i, count;

	int divv = n;

	while (divv)
	{
		count++;
		divv /= 10;
	}
	while (count)
	{
		putchar(n / ('0' + 10 * count));
		count--;
	}
}
