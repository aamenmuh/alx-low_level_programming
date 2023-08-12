#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER 1024
 /**
  * main - copies data from file to another file
  * @argc: number of arguments
  * @argv: list of arguments
  *
  * Return: 0 on success, exits on failure
  */
 int main(int argc, char *argv)
{
	int fileFrom, fileTo;
	char buffer[BUFFER];
	ssize_t readBytes;
	ssize_t writeBytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY)
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98)
	}
	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fileTo == -1)
	{
		close(fileFrom);
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	readBytes = read(fileFrom, buffer, BUFFER);
	while (readBytes > 0)
	{
		writeBytes = write(fileTo, buffer, readBytes);
		if (writeBytes == -1)
		{
			close(fileFrom);
			close(fileTo);
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readBytes == -1)
	{
		close(fileFrom);
		close(fileTo);
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}
	if (close(fileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",fileFrom);
		exit(100);
	}
	if (close(fileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",fileTo);
		exit(100);
	}
	return (0);
}
