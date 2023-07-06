#include <stdio.h>
/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 *
 * returns: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
