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

	va_start(ap, n);

	for(i = 0; i < n; i++)
		if (separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
