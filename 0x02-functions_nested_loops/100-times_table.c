#include <stdio.h>
/**
 * print_times_table  - prints the nth timetable of a number.
 * @n: the para
 */
void print_times_table(int n)
{
	int i, j = 0;

	for (j = 0; j < (n + 1); j++)
	{
	for (i = 0 ; i < n; i++)
	{
		printf("%d", i * j);
		(i + 1) * j < (n + 1) ? printf(",  ") : printf(", ");
	}
	printf("%d", i * j);
	putchar('\n');
}
}
