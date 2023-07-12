#include <stdlib.h>
#include <string.h>
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
	int size, i, j;

	j = 0;
	size = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
	;
	args = malloc((size + 1) * sizeof(char));
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(args + j, av[i]);
		j += strlen(av[i]);
		args[j] = '\n';
		j++;
	}
	args[size] = '\0';
	return (args);
}
