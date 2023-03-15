#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	char* array;
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	for (i = 0; i < strlen(s1) + strlen(s2) + 1; i++)
	{
		if(i < strlen(s1) + 1)
			array[i] = s1[i];
		else
			array[i] = s2[i - strlen(s1) - 1];
	}

	return (array);
}
