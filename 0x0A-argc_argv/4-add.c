#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the number of args
 * @argv: the arguments
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int result, i;
	char *arg;

	*arg = argv[i];
	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		while (*arg)
		{
			if (!isdigit((*arg)))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
