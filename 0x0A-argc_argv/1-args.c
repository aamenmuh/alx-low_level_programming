#include <stdio.h>
/**
 * main - the main function
 * @argc: the number of args
 * @argv: the arguments
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
