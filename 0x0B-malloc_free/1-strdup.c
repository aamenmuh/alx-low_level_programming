#include <stdlib.h>
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
	size = sizeof(str);

	if (str == NULL)
	{
		return (NULL);
	}
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
