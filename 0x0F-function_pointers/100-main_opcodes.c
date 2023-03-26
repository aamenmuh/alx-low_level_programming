#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	printf("%.2x", *ptr);
	for (i = 1; i < num_bytes; i++)
		printf(" %.2x", *(ptr + i));
	printf("\n");

	return (0);
}
