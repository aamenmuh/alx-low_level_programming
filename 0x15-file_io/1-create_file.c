#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - creates a files with given content
 * @filename: name of file
 * @text_content: content to be written to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openStatus;
	ssize_t length;
	ssize_t writeBytes;

	if (filename == NULL)
		return (-1);
	openStatus = fopen(filename, O_WRONLY | O_CREATE | O_TRUNC, S_IRUSR | S_IWUSR);
	if (openStatus == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(openStatus);
		return (1);
	}
	length = strlen(text_content);
	writeBytes = write(openStatus, text_content, length);
	if (writeBytes != length)
	{
		close(openStatus);
		return (-1);
	}
	return (1);
}
