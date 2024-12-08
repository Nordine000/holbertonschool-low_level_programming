#include "main.h"

/**
 * copyFile - Function to create and copy content of a file
 * @file_from: Origin file
 * @file_to: the new file
 * Return: 0 Success
 */
int copyFile(const char *file_from, const char *file_to)
{
	int fdFile_to, fdFile_from;
	ssize_t written, readfile;
	char buffer[1024];

	fdFile_from = open(file_from, O_RDONLY);
	fdFile_to = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 0664);
	while ((readfile = read(fdFile_from, buffer, 1024)) > 0)
	{
		written = write(fdFile_to, buffer, readfile);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (readfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close(fdFile_from);
	close(fdFile_to);
	return (written);
}

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: name of the argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyFile(argv[1], argv[2]);
	return (0);
}
