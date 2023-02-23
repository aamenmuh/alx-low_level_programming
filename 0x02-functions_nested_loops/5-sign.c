#include <stdio.h>
/**
 * print_sign - checks the parity of the number
 * @n: the parameter
 *
 * Return: returns 1, 0, or -1 (sucess).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (putchar('+'), 1);
	}
	else if (n == 0)
	{
		return (putchar('0'), 0);
	}
	else
	{
		return (putchar('-'), -1);
	}
}
