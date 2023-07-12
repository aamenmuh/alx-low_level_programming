#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies string
 * @str: the string
 *
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	newstr = malloc(size);

	if(newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
