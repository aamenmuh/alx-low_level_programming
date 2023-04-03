#include <stdarg.h>
#include <stdio.h>
#include <string.h>
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, length;
	
	length = strlen(format);
	va_start(ap,length);
	i = 0;
	while (i < length - 1)
	{
		if (format[i] == 's')
			printf("%s, ", va_arg(ap, char *));
		else if (format[i] == 'i')
			printf("%i, ", va_arg(ap, int));
		else if (format[i] == 'f')
			printf("%f, ", va_arg(ap, double));
		else if (format[i] == 'c')
			printf("%c, ", (char)va_arg(ap, int));
		i++;
	}
	if (format[i] == 's')
		printf("%s\n", va_arg(ap, char *));
	else if (format[i] == 'i')
		printf("%i\n", va_arg(ap, int));
	else if (format[i] == 'f')
		printf("%f\n", va_arg(ap, double));
	else if (format[i] == 'c')
		printf("%c\n", (char)va_arg(ap, int));
	va_end(ap);
}
