#include <stdlib.h>
/**
 * argstostr - conc args
 * @ac: number of args
 * @av: the args
 *
 * Return: arags
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int size, i;

	size = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		size += sizeof(av[i]);
	}

	size += (ac - 1) * sizeof(char);
	args = malloc(size);
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < 2 * ac - 1; i += 2)
	{
		args[i] = av[i];
		args[i + 1] = '\n';
	}
	return (args);
}
