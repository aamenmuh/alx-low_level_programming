#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator char
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char * s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (separator != NULL && i < n - 1)
		{
			if (s == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", s, separator);
		}
	}
	va_end(ap);
	printf("\n");
}
