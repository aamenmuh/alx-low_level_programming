#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	/*char* array;*/
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1 = (char *)realloc(s1, strlen(s1) + strlen(s2) + 1);

	for (i = 0; i < strlen(s1) + strlen(s2) + 1; i++)
	{
		if (i < strlen(s1))
			s1[i] = s1[i];
		else
			s1[i] = s2[i - strlen(s1)];
	}

	return (s1);
}
