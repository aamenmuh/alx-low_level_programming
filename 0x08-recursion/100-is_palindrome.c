#include <string.h>
#include <stdio.h>
/**
 * helperPalin - a helper function for palindrome
 * @s: the string
 * @startIndex: the start index
 * @endIndex: the ending index
 *
 * Return: returns 1 if the string is a palindrome, 0 otherwise
 */
int helperPalin(char *s, int startIndex, int endIndex)
{
	if (startIndex > endIndex - 1)
	{
		return (1);
	}

	if (s[startIndex] != s[endIndex])
	{
		return (0);
	}

	return (helperPalin(s, startIndex + 1, endIndex - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: returns 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int stringLength;

	stringLength = strlen(s);
	return (helperPalin(s, 0, stringLength - 1));
}
