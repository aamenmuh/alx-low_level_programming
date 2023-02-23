#include <stdio.h>
/**
 * print_to_98 - prints numbers till 98
 * @n : the para
 */
void print_to_98(int n)
{
	int i, step;
	
	n > 98 ? step = -1 : step = 1; 
	for (i = n; abs(i) < 98; i += step){
		printf("%d", i);
		printf(", ");
	}
	printf("%d",i);
	putchar('\n');
}
