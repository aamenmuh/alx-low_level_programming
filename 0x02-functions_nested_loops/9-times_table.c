#include <stdio.h>
/**
 * times_table - prints the times table in a table.
 */
void times_table(void)
{
	int i, j =0;
	
	for(j=0; j < 9; j++)
	{
	for(i=0 ; i < 9; i++)
	{
		printf("%d", i * j);
		printf(", ");
	}
	printf("%d", i*j);
	putchar('\n');
}
}
