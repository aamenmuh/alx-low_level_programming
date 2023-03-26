#include <stdio.h>
#include <strdlib.h>
#include <string.h>
void print_name(char *name, void (*f)(char *))
{
	prtinf("%s", name);
}
