#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of arguments
 * @argv: number of argumnets
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int value, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	counter += value / 25;
	value %= 25;
	counter += value / 10;
	value %= 10;
	counter += value / 5;
	value %= 5;
	counter += value / 2;
	value %= 2;
	counter += value;
	printf("%d", counter);
	return (0);
}
