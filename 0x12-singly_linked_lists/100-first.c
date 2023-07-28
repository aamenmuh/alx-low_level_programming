#include <stdio.h>
void preMain(void) __attribute__ ((constructor));
/**
 * preMain - executes before main
 */
void preMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
