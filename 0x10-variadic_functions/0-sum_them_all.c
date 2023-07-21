#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - adds all args
 * @n: number of args
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
