#include <stdio.h>
void preMain(void) __attribute__ ((constructor));
/**
 * preMain - executes before main
 *
 * Return: nothing
 */
void preMain(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
