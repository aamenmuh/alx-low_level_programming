#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concat strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: returns concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = 0;
	if (n > strlen(s2) - 1)
		size += strlen(s2);
	else
		size += n;
	size += strlen(s1);
	s = malloc(size + 1);
	if (s == NULL)
		return (s);
	return (s);
}
