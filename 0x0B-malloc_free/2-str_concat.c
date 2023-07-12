#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concat strings
 * @s1: first string
 * @s2: second string
 *
 * 
 * Return: returns conc string
 */
char *str_concat(char *s1, char *s2)
{
	char *concString;
	size_t i, size;

	size = strlen(s1) + strlen(s2) + 1;
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	concString = malloc(size);
	if(concString == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (i < strlen(s1))
		{
			concString[i] = s1[i];
		}
		else
		{
			concString[i] = s2[i - strlen(s1)]
		}
	}
	return (concString);
}
