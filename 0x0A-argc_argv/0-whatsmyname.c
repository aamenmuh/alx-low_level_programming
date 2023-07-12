#include <stdio.h>
/**
 * main - the main function
 * @argc: the number of args
 * @argv: the arguments
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf(argv[0]);
	}
	printf('\n');
	return (0);
}
