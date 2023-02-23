#include <stdio.h>
/**
 * print_to_98 - prints numbers till 98
 * @n : the para
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++){
		printf("%d", i);
		printf(", ");
	}
	printf("%d",i);
	putchar('\n');
}
