#include <stdio.h>
/**
 * print_times_table  - prints the nth timetable of a number.
 * @n: the para
 */
void print_times_table(int n)
{
	int i, j = 0;
	int add1;
	
	if (n > -1 && n < 16)
	{
		for (j = 0; j < (n + 1); j++)
		{
		for (i = 0; i < n; i++)
		{
			add1 = i + 1;
			printf("%d", i * j);
			add1 * j < 10 ? printf(",   ") : (add1 * j < 100 ? printf(",  ") : printf(", "));
		}
		printf("%d", i * j);
		putchar('\n');
	}
}
}
