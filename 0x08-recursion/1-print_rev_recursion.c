#include <stdio.h>
/**
 * _print_rev_recursion - recursively prints.
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
