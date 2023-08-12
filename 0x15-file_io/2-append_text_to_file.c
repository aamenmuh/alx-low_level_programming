#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * append_text_to_file - adds new content to eof.
 * @filename: name of file
 * @text_content: new content to be added
 *
 * Return: 1 on success, -1 on failure
 */
 int append_text_to_file(const char *filename, char *text_content)
 {
 	int openStatus;
 	ssize_t length;
 	ssize_t writeBytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	openStatus = open(filename, O_APPEND);
	if (openStatus == -1)
		return (-1);
	length = strlen(text_content);
	writeBytes = write(openStatus, text_content, length);
	if (writeBytes != length)
	{
		close(openStatus);
		return (-1);
	}
	close(openStatus);
	return (1);
 }
