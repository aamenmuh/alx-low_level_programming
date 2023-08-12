#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads data from a text file
 * @filename: name of file
 * @letters: number of characters to read and print
 *
 * Return: returns letters read on success, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *allocation;
	size_t readBytes;
	size_t writeBytes;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	allocation = malloc(letters + 1);
	if (allocation == NULL)
	{
		fclose(file);
		return (0);
	}
	readBytes = fread(allocation, 1, letters, file);
	if (readBytes == 0)
	{
		free(allocation);
		fclose(file);
		return (0);
	}
	allocation[readBytes] = '\0';

	writeBytes = fwrite(allocation, 1, readBytes, stdout);
	if (writeBytes != readBytes)
	{
		free(allocation);
		fclose(file);
		return (0);
	}
	free(allocation);
	fclose(file);
	return (readBytes);
}
