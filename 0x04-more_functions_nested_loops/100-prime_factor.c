#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Finds the largest prime factor of 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long N = 612852475143;
	long i, largest_factor;

	largest_factor = 1;

	for (i = 2; i <= N; i++)
	{
		while (N % i == 0)
		{
			largest_factor = i;
			N /= i;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
