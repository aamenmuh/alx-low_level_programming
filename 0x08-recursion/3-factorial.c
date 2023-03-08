#include <stdio.h>
/**
 * factorial - computes the factorial
 * @n: the number
 *
 * Return: returns n!
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
