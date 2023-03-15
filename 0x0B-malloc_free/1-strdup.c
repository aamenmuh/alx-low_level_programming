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
	char* array;
	int i;

	if (str == NULL)
		return (NULL);
	array = (char*)malloc(size);
	if(array == NULL)
		return (NULL);

	for (i = 0 ; i < size; i++)
		array[i] = str[i];

	return (array);
}
