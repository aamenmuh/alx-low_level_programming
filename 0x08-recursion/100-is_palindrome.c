#include <string.h>
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: returns 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int result;

	if (len == 0)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		result = is_palindrome(s + 1);
		s[len - 1] = s[0];
		return (result);
	}
	return (0);
}
