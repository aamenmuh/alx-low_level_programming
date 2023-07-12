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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
