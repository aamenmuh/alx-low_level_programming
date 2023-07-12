#include <string.h>
#include <stdlib.h>
/**
 * strtow - separates words
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	char **words;
	int wordNum, i, cI, size, k, z;

	cI = 0;
	z= 0;
	if (str == NULL || strlen(str) == 0)
		return (NULL);
	size = strlen(str);
	for (i = 0; i < size; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordNum++;
	if (wordNum == 0)
		return (NULL);
	words = (char **)malloc((wordNum + 1) * sizeof(char *));
	if (words == NULL)
		return (words);
	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ')
		{
			k = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words[cI] = (char *)malloc((i - k + 1) * sizeof(char));
			if (words[cI] == NULL)
			{
				for (i = 0; i < cI; i++)
					free(words[cI]);
				free(words);
				return (NULL);
			}

			strncpy(words[cI], &str[k], i - k);
			words[cI][i - k] = '\0';
			cI++;
		}
	}
	words[size] = NULL;

	return (words);
}
