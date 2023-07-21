#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all args
 * @n: number of args
 * @separator: separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int j;

	j =0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		if (separator != NULL && i < n - 1)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	va_end(ap);
	printf("\n");
}
