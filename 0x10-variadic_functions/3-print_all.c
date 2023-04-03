#include <stdarg.h>
#include <stdio.h>
#include <string.h>
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, length;
	
	length = strlen(format);
	va_start(ap,format);
	i = 0;
	if(format != NULL)
	{
	while (i < length - 1)
	{
		switch(format[i])
		{
			case 's':
				printf("%s, ", va_arg(ap, char *));
				break;
			case  'i':
				printf("%i, ", va_arg(ap, int));
				break;
			case  'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case  'c':
				printf("%c, ", (char)va_arg(ap, int));
				break;
		}
		i++;
	}
	switch(format[i])
	{
		case's':
			printf("%s\n", va_arg(ap, char *));
			break;
		case 'i':
			printf("%i\n", va_arg(ap, int));
			break;
		case 'f':
			printf("%f\n", va_arg(ap, double));
			break;
		case 'c':
			printf("%c\n", (char)va_arg(ap, int));
			break;
	}
	}
	if (format == NULL)
	{
		printf("%s", va_arg(ap, char *));
	}
	va_end(ap);
}
