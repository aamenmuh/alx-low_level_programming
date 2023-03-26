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
	/* Check if number of arguments is correct */
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		eixt (1);
	}

	/* Convert argument to integer */
	int num_bytes = atoi(argv[1]);

	/* Check if argument is negative */
	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		exit (2);
	}

	/* Print opcodes */
	unsigned char *ptr = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *ptr);
		ptr++;
	}

	printf("\n");

	return (0);
}
