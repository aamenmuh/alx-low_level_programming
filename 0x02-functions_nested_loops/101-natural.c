#include <stdio.h>
/**
 * main - the main function
 * Return: always 0 (success)
 */
int main(void)
{
	int sum, i;
	
	for (i = 3; i < 1024; i++)
	{
		if ( i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n",i);

	return (0);
}
