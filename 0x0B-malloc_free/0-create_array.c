#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: inital chars
 *
 * 
 * Return: returns pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i ++)
	{
		ar[i] = c;
	}

	return (ar);
}
