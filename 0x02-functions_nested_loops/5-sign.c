#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	int sign = 0;
	
	if (n > 0)
	{
		sign = 1;
	}
	else if (n < 0)
	{
		sign = -1;
	}
	
	printf("%d%c", sign, (sign == 0 ? '0' : '+'));
	return sign;
}
