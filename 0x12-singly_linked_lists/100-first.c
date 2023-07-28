#include <stdio.h>
void preMain(void) __attribute__((constructor));
/**
 * preMain - executes before main
 */
void preMain(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
}
