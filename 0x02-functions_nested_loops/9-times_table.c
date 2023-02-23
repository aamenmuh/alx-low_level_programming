#include <stdio.h>
/**
 * times_table - prints the times table in a table.
 */
void times_table(void)
{
	int i, j =0;
	
	for(j=0; j < 10; j++)
	{
	for(i=0 ; i < 10; i++)
	{
		printf("%d", i * j);
		printf(", ");
	}
	putchar('\n')
}
}
