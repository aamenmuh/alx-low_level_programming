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
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = argv[1] * argv[2];
	printf("%d\n", result);
	return (0);
}
