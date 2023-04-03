#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers with a separator
 * @separator: separator
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *myString;

	va_start (ap, n);

	for (i = 0 ; i < n - 1; i++)
	{
		myString = va_arg (ap, char *);
		if (myString == NULL)
			myString = "(nil)";
		if(separator != NULL)
			printf("%s%s", myString, separator);
		else
			printf("%s", myString);
	}
	printf("%s\n", va_arg (ap, char *));
	va_end (ap);
}
