#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - returns conacatinated string
 * @s1: first string
 * @s2: second string
 * @n: number of chars to take from s2
 *
 * Return: returns Null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2) + 1)
		n = strlen(s2) + 1;

	pointer = malloc(strlen(s1) + n + 1);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1) + n + 1; i++)
	{
		if (i < strlen(s1))
			pointer[i] = s1[i];
		else
			pointer[i] = s2[i];
	}

	return (pointer);
}
