#include <stdio.h>
/**
 * _puts_recursion - recursively prints.
 *
 * Return: zobry
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);

	_puts_recursion(s + 1);
}
