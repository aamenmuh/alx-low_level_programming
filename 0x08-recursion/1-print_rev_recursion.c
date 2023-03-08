#include <stdio.h>
/**
 * _print_rev_recursion - recursively prints.
 *
 * Return: zobry
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_puts_recursion(s + 1);
	printf("%c", *s);
}
