#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new memory
 * @str: pointer to string
 *
 * Return: return pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	array = (char *)malloc(sizeof(str));
	if(array == NULL)
		return (NULL);

	for (i = 0 ; i < sizeof(str); i++)
		array[i] = str[i];

	return (array);
}
