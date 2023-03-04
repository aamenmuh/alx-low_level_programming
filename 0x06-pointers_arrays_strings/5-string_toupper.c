#include <stdio.h>
/**
 * string_topupper - converst lowercase chars to uppercase
 * @str: array of characters
 *
 * Return: returns the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
