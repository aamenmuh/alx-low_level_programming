#include <stdio.h>
/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 *
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
		return n;
	else
	{
		n++;
		_strlen_recursion(s + 1);
	}
}
