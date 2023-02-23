#include <stdio.h>
/**
 * times_table - prints the times table in a table.
 */
void times_table(void)
{
	for(int j=0; j<10; j++)
	{
	for( int i=0 ; i< 10; i++)
	{
		printf("%d", i*j, ", ");
	}
	puchar('\n')
}
}
