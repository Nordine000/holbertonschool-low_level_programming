#include "main.h"

/**
 * read_textfile - imprime
 * @filename: nom
 * @letters: nombre de lettre
 * Return: nombre de byts
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t written, reading;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	reading = read(fd, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, reading);
	if (written == -1 || written != reading)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (written);
}
