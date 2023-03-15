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
	array = (char *)malloc(strlen(str) + 1);
	if(array == NULL)
		return (NULL);

	for (i = 0 ; i < strlen(str) + 1; i++)
		array[i] = str[i];

	return (array);
}
