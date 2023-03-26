#include <stdio.h>
/**
 * print_name - function that prints the name
 * @name: pointer to name
 * @f: a function with a char parameter
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
